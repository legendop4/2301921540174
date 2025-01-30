# README FOR ALL STACK SOLUTION AND APPROACHES 
---

# Valid Parentheses
# Problem Number : #20
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem requires checking if a given string of parentheses is balanced (valid). A valid string must satisfy:
          1. Every opening bracket ((, {, [) must have a corresponding closing bracket (), }, ]).
          2. The brackets must be closed in the correct order.
A stack is a natural choice for this problem because of its LIFO (Last In, First Out) behavior, which aligns with how brackets should be closed.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Use a Stack:
        - Push opening brackets ((, {, [).
        - When encountering a closing bracket:
                - If the stack is not empty and the top of the stack matches the corresponding opening bracket, pop the top.
                - Otherwise, return false (mismatched or extra closing bracket).
2. Final Check:
        - If the stack is empty at the end, the string is valid.
        - If there are unmatched opening brackets left, return false.

# Complexity
**Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- O(n), where n is the length of the string (each character is processed once).

**Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- O(n) in the worst case (all opening brackets are stored in the stack).

---
# Implement Stack using queue
# Problem Number : #225

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to implement a stack using a single queue. A stack follows the LIFO (Last In, First Out) principle, whereas a queue follows FIFO (First In, First Out). 
To mimic stack behavior using a queue, we ensure that the most recently added element is always at the front of the queue.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Push Operation:
        - Insert the element into the queue.
        - Rotate the queue (move all previous elements to the back) so that the newly inserted element becomes the front of the queue.
        - This ensures that pop() and top() operations retrieve the last pushed element efficiently.
2. Pop Operation:
        - The front element of the queue is the top of the stack.
        - Remove and return it.
3. Top Operation:
        - Simply return the front element of the queue.
4. Empty Operation:
        - Check if the queue is empty.

# Complexity
1. Push: O(n) (Reordering requires moving all previous elements)
2. Pop: O(1) (Directly remove from the front)
3. Top: O(1) (Directly access the front)
4. Empty: O(1) (Check if the queue is empty)

---

# Next Greater Element 1
# Problem Number : #496

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

# Find Middle Element in the Stack
# Problem Number : #1991

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
# ALL Solutions of Stack are completed 









