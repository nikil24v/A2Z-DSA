🚀 A2Z DSA — Complete Data Structures & Algorithms Repository
<p align="center"> <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge"/> <img src="https://img.shields.io/badge/Status-Active-success?style=for-the-badge"/> <img src="https://img.shields.io/badge/Sheet-Striver%20A2Z-orange?style=for-the-badge"/> </p>

A clean, structured, and continuously growing collection of DSA solutions following Striver’s A2Z Sheet, with support for multiple sheets and topic-wise mastery.


# C++ STL Revision Guide

Quick reference for Standard Template Library (STL) containers, algorithms, and utilities 
---

## 1. Sequence Containers

### 📌 `vector`
Dynamic array.

Common Functions:
- `push_back(x)` → Add element at end
- `pop_back()` → Remove last element
- `size()` → Number of elements
- `clear()` → Remove all elements
- `front()` → First element
- `back()` → Last element
- `at(i)` → Element at index (safe)
- `begin(), end()` → Iterators
- `insert(pos, x)` → Insert at position
- `erase(pos)` → Remove element at position

Use When:
- Fast access by index
- Dynamic resizing
- Most coding problems

### Declaration
vector<int> v;

---

### 📌 `deque`
Double-ended queue.

Functions:
- `push_front(x)` → Add at front
- `push_back(x)` → Add at end
- `pop_front()` → Remove front
- `pop_back()` → Remove end
- `front()`, `back()`

Use When:
- Need fast insert/remove from both ends

### Declaration
deque<int> dq;


---

### 📌 `list`
Doubly linked list.

Functions:
- `push_back(x)`
- `push_front(x)`
- `pop_back()`
- `pop_front()`
- `remove(x)` → Remove all occurrences

Use When:
- Frequent insert/delete in middle
- No random access needed

### Declaration
list<int> l;


---

## 2. Associative Containers

### 📌 `map`
Sorted key-value pairs (Red-Black Tree)

Functions:
- `m[key] = value` → Insert/update
- `find(key)` → Returns iterator
- `erase(key)` → Remove key
- `count(key)` → 0 or 1
- `size()`

Use When:
- Need sorted keys
- Frequency counting
- Order matters

### Declaration
map<int, int> m;


---

### 📌 `unordered_map`
Hash table (Fast, unsorted)

Functions:
- `m[key]`
- `find(key)`
- `erase(key)`
- `count(key)`

Use When:
- Majority element
- Frequency counting
- Fast lookup (O(1) average)

### Declaration
unordered_map<int, int> um;


---

### 📌 `set`
Sorted unique elements

Functions:
- `insert(x)`
- `erase(x)`
- `find(x)`
- `count(x)`
- `size()`

Use When:
- Unique elements
- Sorted data

### Declaration
set<int> s;


---

### 📌 `unordered_set`
Unique elements, fast lookup

Functions:
- `insert(x)`
- `erase(x)`
- `find(x)`

Use When:
- Fast membership checking
- No order needed

### Declaration
unordered_set<int> us;


---

## 3. Container Adapters

### 📌 `stack`
LIFO (Last In First Out)

Functions:
- `push(x)`
- `pop()`
- `top()`
- `empty()`
- `size()`

Use When:
- Recursion
- Expression evaluation
- Monotonic stack problems

### Declaration
stack<int> st;


---

### 📌 `queue`
FIFO (First In First Out)

Functions:
- `push(x)`
- `pop()`
- `front()`
- `back()`

Use When:
- BFS
- Scheduling

### Declaration
queue<int> q;

---

### 📌 `priority_queue`
Heap (Max by default)

Functions:
- `push(x)`
- `pop()`
- `top()`

Use When:
- K largest/smallest
- Scheduling
- Dijkstra

### Declaration
priority_queue<int> pq; // Max heap
priority_queue<int, vector<int>, greater<int>> minpq; // Min heap


---

## 4. Algorithms (`<algorithm>`)

### 🔹 Searching
- `find(begin, end, x)` → Find element
- `binary_search(begin, end, x)` → Check existence (sorted)

### 🔹 Sorting
- `sort(begin, end)`
- `reverse(begin, end)`

### 🔹 Min/Max
- `min_element(begin, end)`
- `max_element(begin, end)`

### 🔹 Counting
- `count(begin, end, x)`

---

## 5. Utility

### 📌 `pair`
Stores two values.

Functions:
- `make_pair(a, b)`
- `.first`
- `.second`

---

## 6. Iterators

Types:
- `begin()` → First element
- `end()` → After last element
- `rbegin()` → Reverse start
- `rend()` → Reverse end

---

## 7. Quick Decision Guide

| Problem Type | Use This |
|-------------|----------|
| Frequency / Majority | `unordered_map` |
| Sorted Data | `map` / `set` |
| Fast Access | `vector` |
| Stack Problems | `stack` |
| BFS | `queue` |
| Top K Elements | `priority_queue` |
| Unique Elements | `set` / `unordered_set` |

---

## 8. Interview Tip

If your mind jumps to `map`, ask:
- **Do I need order?**
  - Yes → `map`
  - No → `unordered_map` (faster)

---

## Study Resources (Striver / takeUforward)

- **C++ STL Complete Playlist – Striver**  
  https://www.youtube.com/playlist?list=PLN4aKSfpk8TQ6CqzMRDVUr-jEpObLiYdq  

- **C++ STL Complete Tutorial (One Shot)**  
  https://www.youtube.com/watch?v=okhdtEk1iKk  

- **Striver A2Z DSA Course (Official Channel)**  
  https://www.youtube.com/@takeUforward  

- **Striver A2Z DSA Sheet**  
  https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z/

---

## References
- https://cplusplus.com/reference/stl/  
- https://en.cppreference.com/w/cpp/container  
- https://en.cppreference.com/w/cpp/algorithm  

---

## Goal

Master STL so you focus on **logic, not syntax** in coding interviews and competitive programming.
