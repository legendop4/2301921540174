# README FOR ALL SOLUTION AND APPROACHES 
---

# Check if Array is Sorted

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem requires checking if a given array is sorted in non-decreasing order. 
If at any point a previous element is greater than the current element, the array is not sorted.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Iterate through the array from the second element to the last.
2. Compare each element with its previous element.
3. If any element is smaller than its previous element, return false.
4. If no such case is found, return true.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
-  O(n), where n is the size of the array, since we traverse the array once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), as we use only a constant amount of extra space.
---
# Find The Largest Element in the Array 

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to find the largest element in the given array. We traverse the array while keeping track of the maximum value found so far.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize a variable ans with the first element of the array.
2. Iterate through the array from the second element to the last.
3. If any element is greater than ans, update ans.
4. Return ans as the largest element.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the size of the array, since we traverse the array once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), as we use only a single variable to store the maximum value.

---

# Move All Zeroes To End

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to move all zeros in the array to the end while maintaining the relative order of non-zero elements.
This can be efficiently done using a two-pointer approach.


# Approach
<!-- Describe your approach to solving the problem. -->
1. Use a pointer j to track the position where the next non-zero element should be placed.
2. Iterate through the array:
        - If the current element is non-zero, place it at index j and increment j.
3. After placing all non-zero elements, fill the remaining positions in the array with zeros.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the size of the array, as we iterate through the array only once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), since we modify the array in place without using extra space.

---

# Find Frequency of Element

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem requires counting the occurrences of a given number x in the array. 
A straightforward way to achieve this is by iterating through the array and maintaining a counter.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize a counter ans to 0.
2. Iterate through the array:
        - If the current element matches x, increment ans.
3. Return the final count after the loop completes.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where 𝑛 is the size of the array, as we traverse the array once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
-  𝑂(1) , since we use only a single integer variable for counting.
---
# Anagram Strings

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
An anagram is a word formed by rearranging the letters of another. 
This means both words must have the same character frequencies.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a frequency array sk of size 26 (assuming lowercase English letters).
2. Iterate through s, incrementing the corresponding frequency in sk.
3. Iterate through t, decrementing the corresponding frequency in sk.
4. If all values in sk are zero, s and t are anagrams; otherwise, they are not.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the length of the input strings.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), since we use a fixed-size array (26 elements).
---
# Reverse A string 

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Reversing a string means changing the order of its characters so that the last character becomes the first, the second-last becomes the second, and so on.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Use s.rbegin() and s.rend() to create a reversed version of the string.
2. Construct a new string from the reversed iterators.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the length of the string (since we iterate through all characters once).

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(n), as a new string is created to store the reversed result.
---
#  Non repeating Elements

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem requires finding the first non-repeating element in a given array. 
A non-repeating element is one that appears exactly once in the array. 
To achieve this efficiently, we can use a hash map to count occurrences of each element and then identify the first element with a count of one.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Count occurrences: Use an unordered map (mp) to store the frequency of each element in the array.
2. Identify first unique element: Iterate through the array again and return the first element whose frequency in the map is exactly one.
3. Return default value: If no unique element is found, return 0.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n)

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- The unordered map stores at most O(n) elements in the worst case.
---
# Transpose of a Matrix

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The transpose of a matrix is obtained by swapping its rows and columns, i.e., the element at position (i, j) moves to position (j, i). This means that the new matrix will have its rows converted into columns.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a temporary matrix (arr[n][n]): Store the transposed values in a new 2D array by swapping matrix[j][i] into arr[i][j].
2. Copy the transposed values back: Iterate over the temporary matrix and copy its values back into the original matrix.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- Since we traverse half of the matrix (i < j swaps), we still make O(n2) operations.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1) , No extra space is used; all operations are performed in place.
---
# Search in a Row-Column Sorted matrix

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The matrix is sorted both row-wise and column-wise.
Instead of scanning the entire matrix, we can take advantage of this property to eliminate rows or columns efficiently.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Start from the top-right corner (mat[0][m-1]).
2. Iterate until out of bounds:
        - If mat[row][col] == x: Return true (found x).
        - If mat[row][col] > x: Move left (decrement col).
        - If mat[row][col] < x: Move down (increment row).
3. If we exit the loop, return false (not found).

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n+m), since in the worst case, we move left m times and down n times.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), since no extra space is used.
---
#  Search in a row wise sorted matrix

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The given matrix is sorted row-wise and column-wise, so we can use an efficient binary search approach instead of scanning the entire matrix.

This solution takes a row-wise search approach:
        -Since each row is sorted, we can quickly check if x could be in a given row.
        - If x lies within the range [mat[i][0], mat[i][m-1]], it might be in row i.
        - Perform binary search on that row to check if x is present.
        - If found, return true, otherwise continue checking other rows.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Iterate through all rows of the matrix.
2. For each row:
        - If x is within the row's range (mat[i][0] ≤ x ≤ mat[i][m-1]):
                - Perform binary search on that row.
                - If found, return true.
3. If no row contains x, return false.
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- Binary search per row: O(logm)
Iterating through rows: O(n)
Overall Complexity: O(nlogm) (worse than O(n+m) from the stair-step search approach but still efficient).

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1) (no extra space used).
---
# ALL Solutions of All easy revision  are completed 
