# Array Insertion — Simple Steps to Remember

---

## What is this code doing?

Imagine you have a **row of chairs** with people sitting in them.

You want to add a new person at a specific chair.

Everyone from that chair onwards has to **shift one seat to the right** to make room.

---

## The 5 Steps to Always Remember

### Step 1 — Set up your array

```
Make a big empty array (the row of chairs)
Ask how many elements you have right now
Read those elements in
```

### Step 2 — Ask where to insert and what to insert

```
Ask: which position? (which chair?)
Ask: which value?    (who is the new person?)
```

### Step 3 — Check if it's even possible

```
Is the array full?      → stop, say "array is full"
Is the position crazy?  → stop, say "invalid position"
(position can't be negative or beyond the last element)
```

### Step 4 — Shift elements RIGHT (this is the key step)

```
Start from the LAST element
Move it one step to the right
Go backwards until you reach the insert position
```

> Think of it like telling people:
>
> *"Everyone from seat 3 onwards, move one seat to the right"*
>
> — and you start from the  **last person** , not the first.

### Step 5 — Drop in the new value and increase size

```
Put the new value at the position
Add 1 to n (because you now have one more element)
Print the array
```

---

## The Mental Picture

```
Before:  [ 10 | 20 | 30 | 40 | _ ]
                                 ↑ empty slot

Insert 99 at position 1:

Shift:   [ 10 | 20 | 20 | 30 | 40 ]   ← everyone moved right
Place:   [ 10 | 99 | 20 | 30 | 40 ]   ← 99 dropped in
```

---

## The One Rule That Trips Everyone Up

> Always shift **starting from the end, going backwards.**

If you shift from the front going forward, you overwrite values before saving them.

Starting from the back is  **safe** .

---

## Cheat Sheet

| Step | What you do                 | Why                           |
| ---- | --------------------------- | ----------------------------- |
| 1    | Setup array + read elements | Prepare the row of chairs     |
| 2    | Ask position + value        | Know where and what to insert |
| 3    | Validate                    | Avoid crashes                 |
| 4    | Shift RIGHT from the end    | Make an empty slot            |
| 5    | Insert + n++                | Fill the slot, update count   |

---

> Every array insertion problem in the world follows these exact 5 steps.
>
> Once the picture of **shifting chairs to the right** sticks, the code will follow naturally.
>
