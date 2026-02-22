# Queue Using Linked List

## 1. What is a Queue?

A **queue** follows **FIFO** (First In First Out).

* First element added → first removed
* Last element added → last removed

Like people standing in a line.

---

## 2. Linked List vs Array Queue

**Array Queue:** fixed size
**Linked List Queue:** dynamic size, grows as needed

* No worry about "queue full" unless memory runs out
* Each element is a **Node** with:
  * `data` → value
  * `next` → pointer to next node

---

## 3. Important Terms

* **front** → first element in queue
* **rear** → last element in queue
* **enqueue** → add element at rear
* **dequeue** → remove element from front
* **peek** → view front element without removing it
* **isEmpty** → check if queue has no elements
* **size** → number of elements in queue

---

## 4. ENQUEUE Logic (Add)

1. Create a new Node with value
2. If queue is empty → `front = rear = newNode`
3. Else → `rear->next = newNode` and `rear = newNode`
4. Increase size by 1

---

## 5. DEQUEUE Logic (Remove)

1. If queue empty → underflow
2. Save `front` in temp
3. Move `front` to `front->next`
4. Delete old node
5. If queue becomes empty → `rear = nullptr`
6. Decrease size by 1

---

## 6. PEEK Logic

* Show `front->data`
* If empty → print "Queue Empty"

---

## 7. SIZE Logic

* Keep a counter `count`
* Increase on enqueue
* Decrease on dequeue

---

## 8. Print Logic

* Start from `front`
* Move through each node until `nullptr`
* Print data

---

## 9. Advantages of Linked List Queue

* Dynamic size → no limit like arrays
* No shifting of elements like in array
* Fast enqueue and dequeue → O(1)

---

## 10. Example Usage

```cpp
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.print();      // Queue: 10 20 30
q.dequeue();    // removes 10
q.print();      // Queue: 20 30
q.peek();       // Front element: 20
```

**Key Idea:**
Queue works from  **two ends** :

* Insert at rear
* Remove from front

Stack works from **one end** only (top).

---
