# README FOR ALL SOLUTION AND APPROACHES 
---

# TWO SUM 
# Problem Number : #1
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This code solves the two-sum problem by checking all pairs of numbers in the list.
1. The outer loop picks the first number (nums[j]), and the inner loop checks all numbers after it (nums[k]).
2. If the sum of the two numbers equals the target, their indices (j and k) are added to the result list.
3. The process ensures every pair is checked, and the result is returned.
It's a brute-force approach to finding the solution.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Loop through each number in the array (j).
2. For each number, check all subsequent numbers (k).
3. If the sum of the two numbers equals the target, store their indices (j and k) in the result.
4. Return the result after checking all pairs.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- The time complexity of solution is O(n²).

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- The space complexity of solution is O(1).

---
# Best Time to buy and sell Stock 
# Problem Number : #121

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
We aim to find the maximum profit by buying at the lowest price and selling at the highest price afterward.


# Approach
<!-- Describe your approach to solving the problem. -->
1. Track the minimum price encountered so far (min).
2. For each price, calculate the potential profit (price - min).
3. Update the maximum profit (diff) if the current profit is greater than the previously recorded profit.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), as we iterate through the prices array once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
O(1), as no extra space is used apart from variables.

---





