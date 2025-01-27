# README FOR ALL MATRIX SOLUTION AND APPROACHES 
---

# Reshape The Matrix
# Problem Number : #566
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem is to reshape a given 2D matrix mat into another 2D matrix with the specified dimensions r (rows) and c (columns). 
If it's not possible to reshape (due to mismatched total elements), the function should return the original matrix. 
The reshaping process can be visualized as flattening the matrix into a 1D array and then rearranging the elements into the desired shape.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Input Validation:
  - Check if the total number of elements in the original matrix (mat.size() * mat[0].size()) matches the total number of elements in the desired reshaped matrix (r * c). If not, return the original matrix.
2. Flattening the Matrix:
  - Create a 1D vector temp to store all the elements of the original matrix by iterating over its rows and columns.
3. Constructing the Reshaped Matrix:
  - Create the new matrix res with r rows and c columns. Fill it using the elements from temp by iterating through the desired dimensions and assigning values sequentially.
4. Return Result:
  - Return the reshaped matrix.
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n×m), where n is the number of rows and m is the number of columns in the original matrix. This is for traversing the original matrix to flatten it and then constructing the new matrix.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(n×m), since an additional vector temp is used to store all elements temporarily.

---
# Transpose Matrix 
# Problem Number : #867

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem requires transposing a given matrix, where the rows of the input matrix become the columns of the output matrix and vice versa. This is a common operation in matrix manipulation and can be achieved by directly swapping indices during iteration.


# Approach
<!-- Describe your approach to solving the problem. -->
1. Determine Dimensions:
  - Identify the number of rows and columns in the input matrix mat.
2. Initialize the Result Matrix:
  - Create a new matrix res with dimensions swapped, i.e., res will have cols rows and rows columns.
3. Transpose the Matrix:
  - Iterate through each element in mat, and for every element at position (i, j) in the original matrix, place it at position (j, i) in the transposed matrix.
4. Return Result:
  - Return the new transposed matrix res.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n×m), where n is the number of rows and m is the number of columns in the input matrix. Each element is processed exactly once.


**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(n×m), for storing the transposed matrix.

---

# Diagonal Traverse  
# Problem Number : #498

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem is to traverse a 2D matrix in a diagonal order. Each diagonal in the matrix consists of elements (i, j) such that i + j is constant. 
The direction of traversal alternates for each diagonal:
      - For even diagonals (0, 2, 4, ...), traverse from top-right to bottom-left.
      - For odd diagonals (1, 3, 5, ...), traverse from bottom-left to top-right.


# Approach
<!-- Describe your approach to solving the problem. -->
1. Diagonal Iteration: Iterate over all possible values of i + j (from 0 to m + n - 2), which corresponds to the sum of row and column indices.
2. Traverse Each Diagonal:
      - For each diagonal, calculate the possible coordinates (x, k):
              -  x is the row index (j).
              - k is the column index (i - x).
      - Swap (x, k) if the diagonal index (i) is even, so the traversal alternates between top-right to bottom-left and bottom-left to top-right.
3. Boundary Check: Ensure that x and k are within the matrix bounds. Skip invalid indices.
4. Store Results: Append the valid matrix elements mat[x][k] to the result list.
5. Return Result: Once all diagonals are processed, return the resulting vector.
   
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n×m), where n is the number of rows and m is the number of columns. Each element of the matrix is visited exactly once.
**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1) (excluding the result vector), as no additional space proportional to the input size is used.

---

# Matrix Diagonal Sum 
# Problem Number : #1572

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem involves summing the elements of the primary and secondary diagonals of a square matrix. If the matrix has an odd size, the middle element gets counted twice (once in both diagonals). To handle this, we subtract the middle element once to avoid double counting.


# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize a variable sum to store the diagonal sum.
2. Iterate over the rows of the matrix:
    - Add the primary diagonal element (mat[i][i]) to sum.
    - Add the secondary diagonal element (mat[i][n - i - 1]) to sum.
3. Check if the size of the matrix (n) is odd:
    - If yes, subtract the middle element (mat[n/2][n/2]) from sum to avoid double counting
4. Return the final value of sum.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the number of rows (or columns) in the square matrix. This is because we iterate through each row exactly once. 

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), as no additional space is used apart from a few variables.

---
# ALL Solutions of Matrix are completed 
