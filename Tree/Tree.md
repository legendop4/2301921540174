
# README FOR ALL TREE SOLUTION AND APPROACHES 
---

# Binary Tree Inorder Traversal
# Problem Number : #94
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Inorder traversal of a binary tree follows the order: Left subtree → Root → Right subtree. 
We can implement this using recursion, where we first traverse the left subtree, then visit the root node, and finally traverse the right subtree.

# Approach
<!-- Describe your approach to solving the problem. -->
1. If the root is NULL, return an empty vector.
2. Recursively obtain the inorder traversal of the left subtree.
3. Add the root's value to the result.
4. Recursively obtain the inorder traversal of the right subtree.
5. Merge the results and return.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the number of nodes in the tree, as we visit each node once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(n) in the worst case due to recursion stack space (for a skewed tree), and also for storing the traversal result.

---
# Maximum Depth of Binary Tree
# Problem Number : #104

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The depth of a binary tree is defined as the longest path from the root node to a leaf node. 
We can solve this problem using recursion by computing the depth of the left and right subtrees and taking the maximum of both.

# Approach
<!-- Describe your approach to solving the problem. -->
1. If the root is NULL, return 0 (base case).
2. Recursively compute the depth of the left subtree.
3. Recursively compute the depth of the right subtree.
4. The depth of the current node is the maximum of the left and right subtree depths plus 1 (to account for the current node).
5. Return the computed maximum depth.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the number of nodes in the tree, as we visit each node once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(n) in the worst case (for a skewed tree) due to recursion stack space, and O(logn) in the best case (for a balanced tree).

---

# Lowest Common Ancestor
# Problem Number : #236

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

# Path Sum 
# Problem Number : #112

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
# ALL Solutions of Tree are completed 
