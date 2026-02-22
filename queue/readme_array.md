# Queue Data Structure (Array Implementation)

## 1. What is a Queue?

A **queue** follows:

**FIFO = First In First Out**

Example:
Add 10 → Add 20 → Add 30
Remove → **10 leaves first**

Like people in a line.

---

## 2. Important Terms

front → first element
rear → last element

enqueue → add to rear
dequeue → remove from front

---

## 3. How Array Queue Works

We use:

* array to store values
* front index → first element
* rear index → last element
* both start at **-1** (queue empty)

---

## 4. ENQUEUE Logic (Add)

Steps:

1. If rear == SIZE-1 → queue full
2. If queue empty → set front = 0
3. Increase rear
4. Put value at arr[rear]

---

## 5. DEQUEUE Logic (Remove)

Steps:

1. If front == -1 → queue empty
2. Remove arr[front]
3. If front == rear → queue becomes empty → reset both to -1
4. Else → front++

---

## 6. PEEK Logic

If queue empty → error
Else → show arr[front]

---

## 7. SIZE Logic

We track number of elements:

enqueue → count++
dequeue → count--

---

## 8. Why Queue Operations Are Fast

No searching needed.

Enqueue → O(1)
Dequeue → O(1)
Peek → O(1)

---

## 9. Example

enqueue 10
enqueue 20
enqueue 30

Queue:
10 20 30

dequeue → removes 10

Queue:
20 30

---

## 10. Key Idea to Remember

Stack → works from **one side (top)**

Queue → works from **two sides**

* insert at rear
* remove at front

That is the whole concept.
