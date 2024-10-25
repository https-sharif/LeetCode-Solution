# Remove Sub-Folders from the Filesystem

## Problem Description

Given a list of folders `folder`, return *the folders after removing all **sub-folders** in those folders*. You may return the answer in **any order**.

If a `folder[i]` is located within another `folder[j]`, it is called a **sub-folder** of it. A sub-folder of `folder[j]` must start with `folder[j]`, followed by a `"/"`. For example, `"/a/b"` is a sub-folder of `"/a"`, but `"/b"` is not a sub-folder of `"/a/b/c"`.

The format of a path is one or more concatenated strings of the form: `'/'` followed by one or more lowercase English letters.

- For example, `"/leetcode"` and `"/leetcode/problems"` are valid paths while an empty string and `"/"` are not.


## Solution Approach

The code uses a **Trie** data structure to insert folders in a tree-like hierarchy. By doing this, we can mark the ending of each valid folder and avoid traversing into sub-folders of any folder that has already been marked as a valid endpoint.

## Code Explanation

### `Trie` Class

- **Data Members:**
  - `children`: A map that stores each sub-folder's name as a key and its corresponding `Trie` node as the value.
  - `folderEnd`: A boolean indicating whether the current node marks the end of a valid folder.

- **`insertFolder` Function:**  
  Iterates through the input folder string and constructs the path in the trie. When a "/" is encountered, it checks if the current folder exists as a key in the `children` map. If not, it creates a new `Trie` node for that folder and advances to the next level. This method effectively builds a tree-like representation of the folder hierarchy.

- **`traverse` Function:**  
  Recursively traverses the trie starting from the root. If a node is marked as `folderEnd`, it adds the complete folder path to the answer and stops further traversal to avoid adding sub-folders.

### `removeSubfolders` Function in `Solution` Class

- Creates a root node of the trie and inserts all folders from the input list.
- Traverses the trie and collects all valid folders, excluding their sub-folders.

## Complexity

- **Time Complexity:** $O(N \cdot L)$, where `N` is the number of folders and `L` is the average length of each folder. The code inserts each folder character-by-character into the trie and then traverses the trie once.
- **Space Complexity:** $O(N \cdot L)$, for storing the trie structure with all folders and their sub-folders.
