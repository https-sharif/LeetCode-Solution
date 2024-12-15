# Maximum Average Pass Ratio

## Problem Description

There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array `classes`, where `classes[i] = [pass`<sub>`i`</sub>`, total`<sub>`i`</sub>`]`. You know beforehand that in the `i`<sup>`th`</sup> class, there are `total`<sub>`i`</sub> total students, but only `pass`<sub>`i`</sub> number of students will pass the exam.

You are also given an integer `extraStudents`. There are another `extraStudents` brilliant students that are **guaranteed** to pass the exam of any class they are assigned to. You want to assign each of the `extraStudents` students to a class in a way that **maximizes** the **average** pass ratio across **all** the classes.

The **pass ratio** of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The **average pass ratio** is the sum of pass ratios of all the classes divided by the number of the classes.

Return *the **maximum** possible average pass ratio after assigning the* `extraStudents` *students*. Answers within `10`<sup>`-5`</sup> of the actual answer will be accepted.

## Solution Approach

The solution uses a greedy algorithm with a max-heap to prioritize classes where adding a student yields the maximum gain in pass ratio. For each extra student, the algorithm selects the class that benefits the most and updates the heap accordingly.

## Code Explanation

### `gain` Function

- **Purpose:** Calculates the improvement in pass ratio when an additional student is added to a class.
- **Formula:** `(pass + 1) / (total + 1) - pass / total`.

### Main Algorithm

1. **Initialization:**
   - Calculate the initial sum of pass ratios for all classes.
   - Use a max-heap to store the potential gain in pass ratio for each class along with its current `pass` and `total` values.

2. **Heap Processing:**
   - For each extra student:
     - Extract the class with the highest potential gain from the heap.
     - Update the class by adding one student to both `pass` and `total`.
     - Recalculate its gain and push it back into the heap.

3. **Result:**
   - Return the updated average pass ratio.

## Complexity

- **Time Complexity:** $O((n + k) \log n)$, where `n` is the number of classes and `k` is the number of extra students.
- **Space Complexity:** $O(n)$, for storing classes in the heap.
