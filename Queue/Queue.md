# README FOR ALL QUEUE SOLUTION AND APPROACHES 
---

# Design Circular Queue
# Problem Number : #622
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
A circular queue is a queue with a fixed size where elements wrap around when they reach the end of the array. 
This allows efficient use of space and prevents shifting elements when enqueueing or dequeueing.

# Approach
<!-- Describe your approach to solving the problem. -->
We use a vector queue of size n to store the queue elements and maintain two pointers:
        - front: Points to the front of the queue.
        - rear: Points to the rear of the queue.
# Operations:
1. Enqueue (enQueue(value))
        - If the queue is full ((rear + 1) % n == front), return false.
        - If the queue is empty (rear == -1), initialize front = rear = 0.
        - Otherwise, update rear = (rear + 1) % n.
        - Store the value at queue[rear].
2. Dequeue (deQueue())
        - If the queue is empty (front == -1), return false.
        - If there's only one element (front == rear), reset front and rear to -1.
        - Otherwise, update front = (front + 1) % n.
3. Front (Front())
        - If empty, return -1.
        - Otherwise, return queue[front].
4. Rear (Rear())
        - If empty, return -1.
        - Otherwise, return queue[rear].
5. Check if Empty (isEmpty())
        - Return true if front == -1.
6. Check if Full (isFull())
        - Return true if (rear + 1) % n == front.

# Complexity
1. Enqueue (enQueue()): O(1), since it directly places an element in queue.
2. Dequeue (deQueue()): O(1), since it updates the front pointer.
3. Front (Front()): O(1), as it retrieves an element in constant time.
4. Rear (Rear()): O(1), similar to Front().
5. Is Empty (isEmpty()): O(1), a simple comparison.
6. Is Full (isFull()): O(1), another simple comparison.
---
# Implement Queue using Stack
# Problem Number : #232

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to implement a queue using two stacks (or in this case, two queues). 
A queue follows the FIFO (First In, First Out) principle, while a stack follows LIFO (Last In, First Out).
We need to ensure that elements are dequeued in the correct order.

# Approach
<!-- Describe your approach to solving the problem. -->
1. We maintain two queues:
        - inp: Used for enqueue operations (push).
        - out: Used for dequeue (pop) and peek operations.
2. Push Operation (push(x))
        - Simply push x into the inp queue.
3. Pop Operation (pop())
        - If out is empty, transfer all elements from inp to out, reversing their order.
        - Remove the front element from out.
4. Peek Operation (peek())
        - If out is empty, transfer all elements from inp to out.
        - Return the front element of out.
5. Empty Check (empty())
        - The queue is empty if both inp and out are empty.


# Complexity:
1. Push (push(x)): O(1), since it simply enqueues to inp.
2. Pop (pop()): O(1) amortized, because each element is moved from inp to out at most once.
3. Peek (peek()): O(1) amortized, following the same logic as pop.
4. Empty (empty()): O(1), as it just checks if both queues are empty.

---

# 
# Problem Number : #

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

# 
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
# ALL Solutions of Queue are completed 
