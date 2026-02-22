# Stack Using Array (C++)

## 1. What is a Stack?

A **stack** is a data structure that stores items in a special order.

It follows the rule:

**LIFO = Last In, First Out**

This means:

* The last item you put in is the first item you remove.

Example (plates):

* Put plate A, then B, then C
* You must remove C first, then B, then A

Only the **top** element can be accessed.

---

## 2. Stack Operations

### ✅ Push

Adds an element to the **top** of the stack.

Steps:

1. Check if stack is full
2. If full → show *Overflow*
3. Else increase `top`
4. Put value at `arr[top]`

---

### ✅ Pop

Removes the **top** element.

Steps:

1. Check if stack is empty
2. If empty → show *Underflow*
3. Else print/remove `arr[top]`
4. Decrease `top`

---

### ✅ Peek (Top)

Shows the top element without removing it.

Steps:

1. If empty → error
2. Else show `arr[top]`

---

### ✅ isEmpty

Returns **true** if `top == -1`

Meaning:
No items in stack.

---

### ✅ isFull

Returns **true** if `top == SIZE-1`

Meaning:
Array has no space left.

---

## 3. Logic Behind the Code

### 🔹 Why do we use `top = -1`?

Because:

* Array index starts at **0**
* `-1` means **no element yet**

After first push:

```
top becomes 0
arr[0] = first value
```

---

### 🔹 Push Logic in Code

```
arr[++top] = value;
```

What happens:

1. Increase top first
2. Store value at new top position

Example:

```
top = -1
push(10)
top → 0
arr[0] = 10
```

---

### 🔹 Pop Logic in Code

```
cout << arr[top--];
```

What happens:

1. Print top value
2. Reduce top
3. Old value is ignored

Example:

```
Stack: 10 20 30
top = 2

pop()
prints 30
top becomes 1
```

---

### 🔹 Why use a Class?

The **class Stack** keeps:

* the array
* the top variable
* all functions together

This makes code:

* organized
* reusable
* safe

---

## 4. Algorithm Summary

### PUSH Algorithm

```
IF top == SIZE-1
    print Overflow
ELSE
    top = top + 1
    arr[top] = value
```

---

### POP Algorithm

```
IF top == -1
    print Underflow
ELSE
    print arr[top]
    top = top - 1
```

---

### PEEK Algorithm

```
IF top == -1
    print Empty
ELSE
    print arr[top]
```

---

## 5. Example Run

Input:

```
Push 10
Push 20
Push 30
Pop
Peek
```

Output:

```
10 pushed
20 pushed
30 pushed
30 popped
Top element: 20
```

---

## 6. Key Idea to Remember

A stack is like a  **single door room** :

* You can only enter/exit from that door (top)
* No middle access
* Always last item comes out first
