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
# ALL Solutions of Array are completed 
