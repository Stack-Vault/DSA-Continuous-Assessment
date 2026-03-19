# Array Deletion — Simple Way to Remember

---

## The Mental Picture

Imagine that same  **row of chairs** , but now someone  **leaves** .

You don't want an empty gap in the middle — so everyone to the **right shifts one seat to the left** to close the gap.

```
Before:  [ 10 | 20 | 30 | 40 | 50 ]
Delete position 1 (value 20):

Shift:   [ 10 | 30 | 40 | 50 | 50 ]  ← everyone moved left
n--:     [ 10 | 30 | 40 | 50 ]       ← last seat ignored
```

---

## The 4 Steps to Always Remember

### Step 1 — Read the array

```
Make the array
Ask how many elements
Read them in
```

### Step 2 — Ask which position to delete

```
Ask: which position? (0-based index)
```

### Step 3 — Validate

```
Is position negative?   → stop, "invalid position"
Is position >= n?       → stop, "invalid position"
(you can't delete something that doesn't exist)
```

### Step 4 — Shift elements LEFT and shrink

```
Start from the DELETE position
Move each element one step to the LEFT
Stop one before the last element
Then n-- to shrink the array
```

---

## Watch it Run — Step by Step

Array: `[ 10 | 20 | 30 | 40 | 50 ]`, delete at position **1**

**i = 1** → `arr[1] = arr[2]` → copy 30 into position 1

```
[ 10 | 30 | 30 | 40 | 50 ]
```

**i = 2** → `arr[2] = arr[3]` → copy 40 into position 2

```
[ 10 | 30 | 40 | 40 | 50 ]
```

**i = 3** → `arr[3] = arr[4]` → copy 50 into position 3

```
[ 10 | 30 | 40 | 50 | 50 ]
```

**i = 4** → STOP ❌ because `4 < n - 1 (4)` is false

**n--** → array is now size 4, last `50` is ignored

```
[ 10 | 30 | 40 | 50 ]  ✅
```

---

## Insertion vs Deletion — The Big Difference

|                          | Insertion              | Deletion                  |
| ------------------------ | ---------------------- | ------------------------- |
| **Direction**      | Shift RIGHT            | Shift LEFT                |
| **Loop start**     | End of array `(n-1)` | Delete position `(pos)` |
| **Loop direction** | Backwards `i--`      | Forwards `i++`          |
| **Loop stops at**  | `i >= pos`           | `i < n - 1`             |
| **Size change**    | `n++`                | `n--`                   |
| **Why**            | Make a gap             | Close the gap             |

---

## One Line Summary for Each

> **Insertion** → shift right from the end, drop value in, grow `n++`

> **Deletion** → shift left from the position, close the gap, shrink `n--`
>
