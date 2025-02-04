
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
The goal is to find the lowest common ancestor (LCA) of two given nodes, p and q, in a binary tree.
The LCA is the deepest node in the tree that has both p and q as descendants.
The problem is solved using a recursive depth-first search (DFS) approach.


# Approach
<!-- Describe your approach to solving the problem. -->
1.Base Case:
        - If root is nullptr, return nullptr (no LCA found).
        - If root is either p or q, return root, as one of the nodes is found.
2. Recursive Search:
        - Recursively search for p and q in the left and right subtrees.
        - Store the results in left and right.
3. LCA Determination:
        - If both left and right are non-null, it means p and q are found in different subtrees, making root their LCA.
        - If only one of them is non-null, return the non-null child (it contains p, q, or their LCA).
        - If neither is found, return nullptr.
           
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the number of nodes in the tree. Each node is visited once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(h), where h is the height of the tree due to recursive calls. In the worst case (skewed tree), it can be O(n). In a balanced tree, it is O(logn).
  
---

# Path Sum 
# Problem Number : #112

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
We are tasked with checking whether a path exists in a binary tree where the sum of the node values along that path equals a given target sum.
The approach recursively explores each node and reduces the target sum by the value of the current node.
If we reach a leaf node (a node with no children), we check if the current node's value matches the remaining target sum.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Base case check: If the root is nullptr, return false because there's no path in an empty tree.
2. Leaf node check: If the current node is a leaf (no left or right child), check if its value equals the remaining targetSum. If it does, return true; otherwise, return false.
3. Recursive exploration: Otherwise, recursively check the left and right subtrees. For each child, subtract the current node's value from the target sum and call hasPathSum recursively for both left and right children.
4. Return the result of the recursive checks (either true if a valid path is found, or false if no valid path exists).
   
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
-  O(n), where n is the number of nodes in the tree. We visit each node once in the worst case.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(h), where h is the height of the tree, due to the recursion stack in the case of a deep tree. In the worst case, this could be O(n) for a skewed tree.

---
# ALL Solutions of Tree are completed 
