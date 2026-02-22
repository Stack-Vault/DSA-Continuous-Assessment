
# Linked List Implementation in C++

## Overview

This project implements a **Singly Linked List in C++** with dynamic insertion, searching, traversal, and counting.

Each node stores:

* Data
* Pointer to next node

The list grows dynamically during runtime.

---

## Node Structure

<pre class="overflow-visible! px-0!" data-start="532" data-end="596"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼn">class</span><span></span><span class="ͼt">Node</span><span> {</span><br/><span class="ͼn">public</span><span>:</span><br/><span></span><span class="ͼt">int</span><span> data;</span><br/><span></span><span class="ͼt">Node</span><span>* next;</span><br/><span>};</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

---

# Implemented Operations

---

## 1. Traversal (Print List)

Prints all elements from head to NULL.

<pre class="overflow-visible! px-0!" data-start="704" data-end="856"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼt">void</span><span></span><span class="ͼt">print_list</span><span>(</span><span class="ͼt">Node</span><span>* </span><span class="ͼt">head</span><span>){</span><br/><span></span><span class="ͼn">while</span><span>(</span><span class="ͼt">head</span><span></span><span class="ͼn">!=</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼt">cout</span><span></span><span class="ͼn"><<</span><span></span><span class="ͼt">head</span><span>->data </span><span class="ͼn"><<</span><span></span><span class="ͼr">" "</span><span>;</span><br/><span></span><span class="ͼt">head</span><span> = </span><span class="ͼt">head</span><span>->next;</span><br/><span>    }</span><br/><span></span><span class="ͼt">cout</span><span></span><span class="ͼn"><<</span><span></span><span class="ͼt">endl</span><span>;</span><br/><span>}</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Time Complexity: **O(n)**

---

## 2. Count Nodes

Counts how many nodes exist in the list.

<pre class="overflow-visible! px-0!" data-start="951" data-end="1104"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼt">int</span><span></span><span class="ͼt">count_nodes</span><span>(</span><span class="ͼt">Node</span><span>* </span><span class="ͼt">head</span><span>){</span><br/><span></span><span class="ͼt">int</span><span></span><span class="ͼt">count</span><span> = </span><span class="ͼq">0</span><span>;</span><br/><span></span><span class="ͼn">while</span><span>(</span><span class="ͼt">head</span><span></span><span class="ͼn">!=</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼt">count</span><span class="ͼn">++</span><span>;</span><br/><span></span><span class="ͼt">head</span><span> = </span><span class="ͼt">head</span><span>->next;</span><br/><span>    }</span><br/><span></span><span class="ͼn">return</span><span></span><span class="ͼt">count</span><span>;</span><br/><span>}</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Time Complexity: **O(n)**

---

## 3. Insert at Beginning

Adds node at the start.

<pre class="overflow-visible! px-0!" data-start="1190" data-end="1359"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼt">void</span><span></span><span class="ͼt">insert_node_beginning</span><span>(</span><span class="ͼt">Node</span><span>*& </span><span class="ͼt">head</span><span>, </span><span class="ͼt">int</span><span></span><span class="ͼt">value</span><span>){</span><br/><span></span><span class="ͼt">Node</span><span>* </span><span class="ͼt">newNode</span><span> = </span><span class="ͼn">new</span><span></span><span class="ͼt">Node</span><span>();</span><br/><span></span><span class="ͼt">newNode</span><span>->data = </span><span class="ͼt">value</span><span>;</span><br/><span></span><span class="ͼt">newNode</span><span>->next = </span><span class="ͼt">head</span><span>;</span><br/><span></span><span class="ͼt">head</span><span> = </span><span class="ͼt">newNode</span><span>;</span><br/><span>}</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Time Complexity: **O(1)**

---

## 4. Insert at End

Adds node at the last position.

<pre class="overflow-visible! px-0!" data-start="1447" data-end="1774"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼt">void</span><span></span><span class="ͼt">insert_node_end</span><span>(</span><span class="ͼt">Node</span><span>*& </span><span class="ͼt">head</span><span>, </span><span class="ͼt">int</span><span></span><span class="ͼt">value</span><span>){</span><br/><span></span><span class="ͼt">Node</span><span>* </span><span class="ͼt">newNode</span><span> = </span><span class="ͼn">new</span><span></span><span class="ͼt">Node</span><span>();</span><br/><span></span><span class="ͼt">newNode</span><span>->data = </span><span class="ͼt">value</span><span>;</span><br/><span></span><span class="ͼt">newNode</span><span>->next = </span><span class="ͼq">NULL</span><span>;</span><br/><br/><span></span><span class="ͼn">if</span><span>(</span><span class="ͼt">head</span><span></span><span class="ͼn">==</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼt">head</span><span> = </span><span class="ͼt">newNode</span><span>;</span><br/><span></span><span class="ͼn">return</span><span>;</span><br/><span>    }</span><br/><br/><span></span><span class="ͼt">Node</span><span>* </span><span class="ͼt">temp</span><span> = </span><span class="ͼt">head</span><span>;</span><br/><span></span><span class="ͼn">while</span><span>(</span><span class="ͼt">temp</span><span>->next </span><span class="ͼn">!=</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼt">temp</span><span> = </span><span class="ͼt">temp</span><span>->next;</span><br/><span>    }</span><br/><br/><span></span><span class="ͼt">temp</span><span>->next = </span><span class="ͼt">newNode</span><span>;</span><br/><span>}</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Time Complexity: **O(n)**

---

## 5. Insert at Any Position  ✅ NEW

Allows insertion at a specific position (1-indexed).

Example:

Before:

<pre class="overflow-visible! px-0!" data-start="1917" data-end="1937"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span>10 → 20 → 30</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Insert value **100 at position 2**

After:

<pre class="overflow-visible! px-0!" data-start="1982" data-end="2008"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span>10 → 100 → 20 → 30</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

<pre class="overflow-visible! px-0!" data-start="2010" data-end="2540"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼt">void</span><span></span><span class="ͼt">insert_any_position</span><span>(</span><span class="ͼt">Node</span><span>*& </span><span class="ͼt">head</span><span>, </span><span class="ͼt">int</span><span></span><span class="ͼt">pos</span><span>, </span><span class="ͼt">int</span><span></span><span class="ͼt">val</span><span>){</span><br/><span></span><span class="ͼt">Node</span><span>* </span><span class="ͼt">newNode</span><span> = </span><span class="ͼn">new</span><span></span><span class="ͼt">Node</span><span>();</span><br/><span></span><span class="ͼt">newNode</span><span>->data = </span><span class="ͼt">val</span><span>;</span><br/><br/><span></span><span class="ͼn">if</span><span>(</span><span class="ͼt">pos</span><span></span><span class="ͼn">==</span><span></span><span class="ͼq">1</span><span>){</span><br/><span></span><span class="ͼt">newNode</span><span>->next = </span><span class="ͼt">head</span><span>;</span><br/><span></span><span class="ͼt">head</span><span> = </span><span class="ͼt">newNode</span><span>;</span><br/><span></span><span class="ͼn">return</span><span>;</span><br/><span>    }</span><br/><br/><span></span><span class="ͼt">Node</span><span>* </span><span class="ͼt">prev</span><span> = </span><span class="ͼt">head</span><span>;</span><br/><span></span><span class="ͼt">int</span><span></span><span class="ͼt">current_position</span><span> = </span><span class="ͼq">1</span><span>;</span><br/><br/><span></span><span class="ͼn">while</span><span>(</span><span class="ͼt">current_position</span><span></span><span class="ͼn"><</span><span></span><span class="ͼt">pos</span><span class="ͼn">-</span><span class="ͼq">1</span><span></span><span class="ͼn">&&</span><span></span><span class="ͼt">prev</span><span></span><span class="ͼn">!=</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼt">prev</span><span> = </span><span class="ͼt">prev</span><span>->next;</span><br/><span></span><span class="ͼt">current_position</span><span class="ͼn">++</span><span>;</span><br/><span>    }</span><br/><br/><span></span><span class="ͼn">if</span><span>(</span><span class="ͼt">prev</span><span></span><span class="ͼn">==</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼt">cout</span><span class="ͼn"><<</span><span class="ͼr">"no such position</span><span class="ͼx">\n</span><span class="ͼr">"</span><span>;</span><br/><span></span><span class="ͼn">return</span><span>;</span><br/><span>    }</span><br/><br/><span></span><span class="ͼt">newNode</span><span>->next = </span><span class="ͼt">prev</span><span>->next;</span><br/><span></span><span class="ͼt">prev</span><span>->next = </span><span class="ͼt">newNode</span><span>;</span><br/><span>}</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Time Complexity: **O(n)** (worst case: inserting at end)

---

## 6. Search in Linked List (`is_found`) ✅ NEW

Checks whether a value exists in the list.

Idea:

* Start from head
* Compare each node
* If found → return true
* If end reached → return false

<pre class="overflow-visible! px-0!" data-start="2799" data-end="2989"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span class="ͼt">bool</span><span></span><span class="ͼt">is_found</span><span>(</span><span class="ͼt">Node</span><span>* </span><span class="ͼt">head</span><span>, </span><span class="ͼt">int</span><span></span><span class="ͼt">val</span><span>){</span><br/><span></span><span class="ͼn">while</span><span>(</span><span class="ͼt">head</span><span></span><span class="ͼn">!=</span><span></span><span class="ͼq">NULL</span><span>){</span><br/><span></span><span class="ͼn">if</span><span>(</span><span class="ͼt">head</span><span>->data </span><span class="ͼn">==</span><span></span><span class="ͼt">val</span><span>){</span><br/><span></span><span class="ͼn">return</span><span></span><span class="ͼq">true</span><span>;</span><br/><span>        }</span><br/><span></span><span class="ͼt">head</span><span> = </span><span class="ͼt">head</span><span>->next;</span><br/><span>    }</span><br/><span></span><span class="ͼn">return</span><span></span><span class="ͼq">false</span><span>;</span><br/><span>}</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

Time Complexity: **O(n)**

---

# Program Input Format  ✅ NEW

The program builds the list using user input.

### Input

<pre class="overflow-visible! px-0!" data-start="3111" data-end="3165"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span>num_nodes num_queries</span><br/><span>list_values</span><br/><span>query_values</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

### Example

<pre class="overflow-visible! px-0!" data-start="3179" data-end="3211"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span>4 3</span><br/><span>10 20 30 40</span><br/><span>20</span><br/><span>100</span><br/><span>5</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

### Output

<pre class="overflow-visible! px-0!" data-start="3224" data-end="3293"><div class="w-full my-4"><div class=""><div class="relative"><div class="h-full min-h-0 min-w-0"><div class="h-full min-h-0 min-w-0"><div class="border corner-superellipse/1.1 border-token-border-light bg-token-bg-elevated-secondary rounded-3xl"><div class="pointer-events-none absolute inset-x-4 top-12 bottom-4"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-border-light"></div></div></div><div class="pointer-events-none absolute inset-x-px top-0 bottom-96"><div class="pointer-events-none sticky z-40 shrink-0 z-1!"><div class="sticky bg-token-bg-elevated-secondary"></div></div></div><div class="corner-superellipse/1.1 rounded-3xl bg-token-bg-elevated-secondary"><div class="relative z-0 flex max-w-full"><div id="code-block-viewer" dir="ltr" class="q9tKkq_viewer cm-editor z-10 light:cm-light dark:cm-light flex h-full w-full flex-col items-stretch ͼk ͼy"><div class="cm-scroller"><div class="cm-content q9tKkq_readonly"><span>20 found</span><br/><span>100 not found</span><br/><span>5 not found</span><br/><span>40 30 20 10</span><br/><span>The count is 4</span></div></div></div></div></div></div></div></div><div class=""><div class=""></div></div></div></div></div></pre>

*(Note: list appears reversed because insertion is done at beginning)*

---

# Why Linked Lists?

Advantages:

* Dynamic size
* Fast insertion at beginning O(1)
* Efficient memory usage for growing data
* Useful for stacks, queues, adjacency lists

Disadvantages:

* Extra pointer memory
* Sequential access only
* Searching O(n)
* Harder to debug than arrays

---

# Time Complexity Summary

| Operation        | Complexity |
| ---------------- | ---------- |
| Insert Beginning | O(1)       |
| Insert End       | O(n)       |
| Insert Position  | O(n)       |
| Search           | O(n)       |
| Traverse         | O(n)       |
| Count            | O(n)       |

---

# Conclusion

This project demonstrates:

* Dynamic linked list creation
* Multiple insertion methods
* Searching values interactively
* Traversing and counting nodes

It forms a foundation for advanced structures like:

* Stacks
* Queues
* Graph adjacency lists
* Hash chaining
