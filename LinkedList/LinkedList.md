# README FOR ALL Linked List  SOLUTION AND APPROACHES 
---

# Remove Duplicates From Sorted Linked List 
# Problem Number : #83
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem requires removing duplicate elements from a sorted linked list. 
Since the list is sorted, duplicates will always appear consecutively. 
This property allows us to traverse the list just once, skipping over duplicate nodes.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialization: Start with a pointer, res, set to the head of the list. This pointer will be returned at the end as the updated list.
2. Traverse the List:
        - While the current node (head) and its next node exist, compare their values:
        - If the current node's value equals the next node's value, skip the next node by adjusting the next pointer (head->next = head->next->next).
        - Otherwise, move the head pointer to the next node (head = head->next).
3. Return the Modified List: The traversal ensures that all duplicates are removed by the time the loop exits, so return res.
# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the number of nodes in the linked list, as we only traverse the list once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), as the algorithm uses constant extra space.

---

# Reverse Linked List 
# Problem Number : #206

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
To reverse a singly linked list, the goal is to reverse the direction of the next pointers for each node in the list. 
Instead of moving from one node to the next, we "flip" the connections so that each node points to its previous node.


# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialization:
       - Use three pointers:
              - prev (initially NULL): Tracks the reversed portion of the list.
              - cur (initially head): Tracks the current node being processed.
              - next: Temporarily stores the next node to ensure we don't lose access to the remaining list during reversal.
2. Reversing the List:
    - Iterate through the list while cur is not NULL:
        - Save the next node in next (next = cur->next).
        - Reverse the current node's pointer (cur->next = prev).
        - Move the prev pointer forward to the current node (prev = cur).
        - Move the cur pointer forward to the next node (cur = next).
3. Return the New Head:
      - After the loop, prev points to the new head of the reversed list. Return prev.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the number of nodes in the linked list, as each node is processed exactly once.

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(1), as the algorithm uses only a constant amount of extra space.
---

# Merge Two Sorted Linked List 
# Problem Number : #21

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

# Linked List Cycle
# Problem Number : #141 

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
# ALL Solutions of Linked List  are completed 
