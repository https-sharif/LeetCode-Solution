# N-ary Tree Postorder Traversal

Given the `root` of an n-ary tree, return *the postorder traversal of its nodes' values*.

Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value

## Solution Approach

This solution performs a postorder traversal on an N-ary tree.

1. **Traverse Function**: The `traverse` function recursively visits each node's children before processing the current node.
2. **Postorder Traversal**: In postorder, a node's value is added to the result after all of its children have been traversed.
3. **Base Case**: If the current node is `nullptr`, the function simply returns.

## Complexity
- **Time Complexity**: $O(n)$ – Every node in the tree is visited exactly once, where `n` is the total number of nodes.
- **Space Complexity**: $O(n)$ – In the worst case, the recursion stack and the `ans` vector could hold up to `n` elements.
