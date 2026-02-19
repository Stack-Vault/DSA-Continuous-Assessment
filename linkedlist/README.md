
# Linked List Implementation in C++

---

## Overview

This project explains and implements a Singly Linked List in C++ using simple and clear logic.

A Linked List is a dynamic data structure where:

* Each element (called a node) stores:
  * Data
  * A pointer to the next node
* Elements are not stored in contiguous memory
* The list can grow or shrink during runtime

---

## What is a Linked List?

Unlike arrays, linked list elements are stored in different memory locations and connected using pointers.

### Memory Representation

<pre class="overflow-visible! px-0!" data-start="1034" data-end="1227"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>Head
  ↓
+</span><span>-------+------+     +-------+------+     +-------+------+</span><span>
| Data  | Next | </span><span>--> | Data  | Next | --> | Data  | NULL |</span><span>
+</span><span>-------+------+     +-------+------+     +-------+------+</span><span>
</span></span></code></div></div></pre>

Example:

<pre class="overflow-visible! px-0!" data-start="1239" data-end="1289"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>Head → </span><span>[10 | * ]</span><span> → </span><span>[20 | * ]</span><span> → </span><span>[30 | NULL]</span><span>
</span></span></code></div></div></pre>

---

## Key Terminologies

### Node

Basic unit of linked list.

<pre class="overflow-visible! px-0!" data-start="1356" data-end="1420"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>class</span><span></span><span>Node</span><span> {
</span><span>public</span><span>:
    </span><span>int</span><span> data;
    Node* next;
};
</span></span></code></div></div></pre>

---

### Head

Pointer that stores the address of the first node.

<pre class="overflow-visible! px-0!" data-start="1489" data-end="1518"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>Node* head = </span><span>NULL</span><span>;
</span></span></code></div></div></pre>

---

### NULL / nullptr

Indicates the end of the list.

---

### Traversal

Visiting each node one by one.

---

### Insertion

Adding a new node to the list.

---

### Deletion

Removing a node from the list.

---

## Types of Linked Lists

### 1. Singly Linked List

Each node points only to the next node.

<pre class="overflow-visible! px-0!" data-start="1831" data-end="1855"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>A</span><span> → </span><span>B</span><span> → C → NULL
</span></span></code></div></div></pre>

---

### 2. Doubly Linked List

<pre class="overflow-visible! px-0!" data-start="1889" data-end="1920"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>NULL</span><span> ← A ⇄ B ⇄ C → </span><span>NULL</span><span>
</span></span></code></div></div></pre>

Each node has:

* Previous pointer
* Next pointer

---

### 3. Circular Linked List

<pre class="overflow-visible! px-0!" data-start="2006" data-end="2043"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>A</span><span> → </span><span>B</span><span> → C
↑       ↓
└───────┘
</span></span></code></div></div></pre>

The last node points back to the first node.

---

# Implemented Operations

---

## 1. Traversal (Print List)

### Algorithm

1. Start from head
2. While node is not NULL
3. Print data
4. Move to next node

### Code

<pre class="overflow-visible! px-0!" data-start="2271" data-end="2432"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>void</span><span></span><span>print_list</span><span>(Node* head)</span><span> {
    Node* temp = head;

    </span><span>while</span><span> (temp != </span><span>NULL</span><span>) {
        cout << temp->data << </span><span>" "</span><span>;
        temp = temp->next;
    }
}
</span></span></code></div></div></pre>

---

## 2. Count Nodes (Iterative)

### Algorithm

1. Set counter = 0
2. Start from head
3. Move until NULL
4. Increase counter each time

### Code

<pre class="overflow-visible! px-0!" data-start="2591" data-end="2768"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>int</span><span></span><span>count_nodes</span><span>(Node* head)</span><span> {
    </span><span>int</span><span> count = </span><span>0</span><span>;
    Node* ptr = head;

    </span><span>while</span><span> (ptr != </span><span>NULL</span><span>) {
        count++;
        ptr = ptr->next;
    }

    </span><span>return</span><span> count;
}
</span></span></code></div></div></pre>

---

## 3. Insert at Beginning

### Idea

To insert at the beginning:

<pre class="overflow-visible! px-0!" data-start="2841" data-end="2872"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>NewNode</span><span> → OldHead → ...
</span></span></code></div></div></pre>

### Algorithm

1. Create new node
2. Set newNode->next = head
3. Update head = newNode

### Before

<pre class="overflow-visible! px-0!" data-start="2980" data-end="3014"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>Head → </span><span>10</span><span> → </span><span>20</span><span> → </span><span>30</span><span> → </span><span>NULL</span><span>
</span></span></code></div></div></pre>

### After inserting 5

<pre class="overflow-visible! px-0!" data-start="3039" data-end="3077"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>Head → </span><span>5</span><span> → </span><span>10</span><span> → </span><span>20</span><span> → </span><span>30</span><span> → </span><span>NULL</span><span>
</span></span></code></div></div></pre>

### Code

<pre class="overflow-visible! px-0!" data-start="3089" data-end="3260"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>void</span><span></span><span>insert_node_beginning</span><span>(Node*& head, int</span><span> value) {
    Node* newNode = </span><span>new</span><span></span><span>Node</span><span>();

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
</span></span></code></div></div></pre>

---

## 4. Insert at End

### Idea

Move to the last node, then attach new node.

### Algorithm

1. Create new node
2. If list is empty → head = newNode
3. Otherwise traverse to last node
4. Set last->next = newNode

### Before

<pre class="overflow-visible! px-0!" data-start="3499" data-end="3533"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>Head → </span><span>10</span><span> → </span><span>20</span><span> → </span><span>30</span><span> → </span><span>NULL</span><span>
</span></span></code></div></div></pre>

### After inserting 40

<pre class="overflow-visible! px-0!" data-start="3559" data-end="3598"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre!"><span><span>Head → </span><span>10</span><span> → </span><span>20</span><span> → </span><span>30</span><span> → </span><span>40</span><span> → </span><span>NULL</span><span>
</span></span></code></div></div></pre>

### Code

<pre class="overflow-visible! px-0!" data-start="3610" data-end="3942"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>void</span><span></span><span>insert_node_end</span><span>(Node*& head, int</span><span> value) {
    Node* newNode = </span><span>new</span><span></span><span>Node</span><span>();
    newNode->data = value;
    newNode->next = </span><span>NULL</span><span>;

    </span><span>if</span><span> (head == </span><span>NULL</span><span>) {
        head = newNode;
        </span><span>return</span><span>;
    }

    Node* temp = head;
    </span><span>while</span><span> (temp->next != </span><span>NULL</span><span>) {
        temp = temp->next;
    }

    temp->next = newNode;
}
</span></span></code></div></div></pre>

---

# Why Use Linked Lists?

* Dynamic size
* Efficient insertion and deletion
* No need to declare size in advance
* Useful in stacks, queues, and graphs

---

# Disadvantages

* Extra memory for pointer
* No random access like array
* Searching takes O(n)
* Binary search not efficient
* More complex than arrays

---

# Time Complexity

| Operation           | Time Complexity |
| ------------------- | --------------- |
| Insert at beginning | O(1)            |
| Insert at end       | O(n)            |
| Traversal           | O(n)            |
| Search              | O(n)            |

---

# Example Usage

<pre class="overflow-visible! px-0!" data-start="4486" data-end="4668"><div class="contain-inline-size rounded-2xl corner-superellipse/1.1 relative bg-token-sidebar-surface-primary"><div class="sticky top-[calc(var(--sticky-padding-top)+9*var(--spacing))]"><div class="absolute end-0 bottom-0 flex h-9 items-center pe-2"><div class="bg-token-bg-elevated-secondary text-token-text-secondary flex items-center gap-4 rounded-sm px-2 font-sans text-xs"></div></div></div><div class="overflow-y-auto p-4" dir="ltr"><code class="whitespace-pre! language-cpp"><span><span>Node* head = </span><span>NULL</span><span>;

</span><span>insert_node_beginning</span><span>(head, </span><span>5</span><span>);
</span><span>insert_node_end</span><span>(head, </span><span>40</span><span>);

</span><span>print_list</span><span>(head);

</span><span>int</span><span> total = </span><span>count_nodes</span><span>(head);
cout << </span><span>"The count is "</span><span> << total << endl;
</span></span></code></div></div></pre>

---

# Conclusion

A Linked List:

* Uses nodes connected by pointers
* Is dynamic and flexible
* Does not use contiguous memory
* Is useful for dynamic data structures
