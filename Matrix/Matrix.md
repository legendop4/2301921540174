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



# Approach
<!-- Describe your approach to solving the problem. -->

   
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- 
**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- 

---

# Matrix Diagonal Sum 
# Problem Number : #1572

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->



# Approach
<!-- Describe your approach to solving the problem. -->

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- 

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- 

---
# ALL Solutions of Matrix are completed 
