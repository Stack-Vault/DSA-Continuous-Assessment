# Stack Using Linked List (C++)

## 1. What is a Stack?

A **stack** is a structure that follows:

**LIFO = Last In First Out**

Example:
Push 10 → Push 20 → Push 30
Pop → removes **30 first**

Only the **top element** is accessible.

---

## 2. Why Use Linked List Instead of Array?

Array stack:

* Fixed size
* Can overflow

Linked list stack:

* Dynamic size
* Grows when needed
* No fixed limit (until memory ends)

---

## 3. Basic Idea of Linked List Stack

Each node contains:

* data
* pointer to next node

We keep one pointer:

**top → points to first node**

Example:

top → 30 → 20 → 10 → NULL

---

## 4. PUSH Logic

Goal: Add element at top

Steps:

1. Create new node
2. Make new node point to current top
3. Move top to new node

Pseudo:
IF new node created
new.next = top
top = new

---

## 5. POP Logic

Goal: Remove top element

Steps:

1. Check if stack empty
2. Store current top
3. Move top to next node
4. Delete old top

Pseudo:
IF top == NULL
Underflow
ELSE
temp = top
top = top.next
delete temp

---

## 6. PEEK Logic

Shows top value without removing.

IF stack empty → error
ELSE → print top.data

---

## 7. ISEMPTY Logic

IF top == NULL
stack empty
ELSE
not empty

---

## 8. Why Push and Pop Are Fast?

Because:

* We always add/remove from **front**
* No searching needed

Time Complexity:

Push → O(1)
Pop → O(1)
Peek → O(1)

Very fast.

---

## 9. Example Run

Push 10
Push 20
Push 30

Stack:
30 20 10

Pop → removes 30

Stack:
20 10

---

## 10. Key Concept to Remember

Array stack → uses **index (top number)**
Linked stack → uses **pointer (top node)**

Both represent the same idea:
Only the top matters.
