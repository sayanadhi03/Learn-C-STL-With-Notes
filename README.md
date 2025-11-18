# 🚀 Learn C++ STL With Notes (Basic to Advance)

[![GitHub](https://img.shields.io/badge/GitHub-sayanadhi03-blue?logo=github)](https://github.com/sayanadhi03)
[![C++](https://img.shields.io/badge/Language-C++17-00599C?logo=cplusplus)](https://isocpp.org/)
[![STL](https://img.shields.io/badge/Focus-STL-red)](https://en.cppreference.com/w/cpp/header)

> **A comprehensive collection of C++ Standard Template Library (STL) notes with detailed explanations, practical code examples, and expected outputs.**

Created by: **Sayan Adhikary** ([GitHub Profile](https://github.com/sayanadhi03))

---

## 📋 Table of Contents

- [About STL](#-about-stl)
- [STL Components](#-stl-components)
- [Project Structure](#-project-structure)
 - [Additional notes](#additional-notes)
 - [Algorithms index](ALGORITHMS.md)
 - [Handwritten notes](#handwritten-notes)
- [Getting Started](#-getting-started)
- [Topics Covered](#-topics-covered)
- [Code Examples](#-code-examples)
- [How to Use](#-how-to-use)
- [Contributing](#-contributing)

---

## 📚 About STL

The **Standard Template Library (STL)** is a powerful set of C++ template classes that provides general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures.

### 🔑 Key Features of STL:
- **Template-based**: Generic programming for type safety
- **Efficiency**: Highly optimized algorithms and data structures  
- **Reusability**: Write once, use with any compatible data type
- **Standard**: Part of C++ Standard Library since C++98

### 🏗️ STL Architecture:
STL is built around **three core components**:

1. **Containers** - Data structures (vector, list, map, set, etc.)
2. **Algorithms** - Functions for processing data (sort, search, etc.)  
3. **Iterators** - Objects that connect containers and algorithms

---

## 🧩 STL Components

### 1️⃣ **Containers**
Data structures that store and organize data efficiently.

#### **Sequence Containers**
- 📦 **Vector** - Dynamic array with random access
- 📋 **List** - Doubly linked list for efficient insertion/deletion
- 🔄 **Deque** - Double-ended queue with front & back operations
- 📚 **Stack** - LIFO (Last In, First Out) container adapter
- 🚶 **Queue** - FIFO (First In, First Out) container adapter
- ⭐ **Priority Queue** - Heap-based priority container

#### **Associative Containers**
- 🗂️ **Set** - Sorted unique elements (Red-Black Tree)
- 🔗 **Multiset** - Sorted elements allowing duplicates
- 🗃️ **Map** - Key-value pairs with sorted keys
- 📊 **Multimap** - Key-value pairs allowing duplicate keys

#### **Unordered Containers** (Hash-based)
- 🔍 **Unordered Set** - Hash table for unique elements
- 📈 **Unordered Map** - Hash table for key-value pairs

### 2️⃣ **Iterators**
Objects that provide access to container elements and enable traversal.

#### **Types of Iterators**:
- **Input Iterator** - Read-only, single pass
- **Output Iterator** - Write-only, single pass  
- **Forward Iterator** - Read/write, forward only
- **Bidirectional Iterator** - Forward & backward movement
- **Random Access Iterator** - Jump to any position

### 3️⃣ **Algorithms**
Pre-built functions for common operations on containers.

#### **Categories**:
- **Non-modifying** - find, count, equal, search
- **Modifying** - copy, move, transform, replace
- **Sorting** - sort, stable_sort, partial_sort
- **Binary Search** - binary_search, lower_bound, upper_bound
- **Numeric** - accumulate, inner_product, partial_sum

### 4️⃣ **Functors (Function Objects)**
Classes that behave like functions by overloading the `()` operator.

#### **Types**:
- **Predicate Functors** - Return true/false
- **Arithmetic Functors** - Mathematical operations
- **Comparison Functors** - Custom sorting logic

### 5️⃣ **Utility Components**
- **Pair** - Store two related values
- **Auto** - Automatic type deduction
- **Range-based loops** - Simplified iteration

---

## 📁 Project Structure

```
Learn C++ STL With Notes (Basic to Advance)/
│
├── 📄 README.md                    # This file
├── 📄 STL_CheatSheet.md           # Quick reference guide
├── 📄 C++ STL Handwritten Notes.pdf  # Final scanned handwritten STL notes
├── 📄 C++ function types.pdf        # Handwritten notes on function types
│
├── 📂 Vector_stl_note/
│   └── 📄 LearnVector.cpp         # Complete vector operations
│
├── 📂 stack_stl_note/
│   └── 📄 stack.cpp               # Stack implementation & usage
│
├── 📂 queue_stl_note/
│   └── 📄 queue.cpp               # Queue operations
│
├── 📂 priority_queue_stl_note/
│   └── 📄 priority_queue.cpp      # Priority queue (max/min heap)
│
├── 📂 deque_stl_note/
│   └── 📄 deque.cpp               # Deque operations
│
├── 📂 list_stl_note/
│   └── 📄 list_stl_notes.cpp      # Linked list operations
│
├── 📂 set_stl_note/
│   ├── 📂 set/
│   │   └── 📄 set.cpp             # Basic set operations
│   ├── 📂 multi_Set/
│   │   └── 📄 multi_set.cpp       # Multiset with duplicates
│   ├── 📂 unordered_set/
│   │   └── 📄 unordered_set.cpp   # Hash-based set
│   ├── 📂 lower_bound/
│   │   └── 📄 lower_bound.cpp     # Lower bound operations
│   └── 📂 upper_bound/
│       └── 📄 upper_bound.cpp     # Upper bound operations
│
├── 📂 map_stl_note/
│   ├── 📂 map/
│   │   └── 📄 map.cpp             # Basic map operations
│   ├── 📂 multi_map/
│   │   └── 📄 multi_map.cpp       # Multimap with duplicate keys
│   └── 📂 unordered_map/
│       └── 📄 unordered_map.cpp   # Hash-based map
│
├── 📂 pair_stl_note/
│   └── 📄 pair.cpp                # Pair utility
│
├── 📂 Iterators/
│   └── 📄 it.cpp                  # Iterator concepts & usage
│
├── 📂 FUNCTORS/
│   └── 📄 functor.cpp             # Function objects

├── 📂 sorting_stl_note/
│   └── 📄 sorting.cpp             # Sorting algorithms & comparators

├── 📂 other_algorithms_note/
│   └── 📄 algo.cpp                # Miscellaneous STL algorithms (reverse, binary_search, popcount, ...)

└── 📂 auto explain in loops/
    └── 📄 auto.cpp                # Auto keyword usage
```

## Additional notes

- `sorting_stl_note/sorting.cpp` — detailed sorting examples (ascending/descending, pairs, custom comparators) with inline expected outputs.
- `other_algorithms_note/algo.cpp` — practical algorithm snippets: `reverse`, `next_permutation`, `max_element`/`min_element`, `binary_search`, and `__builtin_popcount` examples.

Run these example files to see console output and verify results against the inline comments.

---

## Handwritten notes

The repository includes two handwritten PDF notes that complement the code examples and explanations:

- `C++ STL Handwritten Notes.pdf` — Final updated handwritten notes covering core STL concepts, container summaries, common algorithms, and annotated examples. See the file at the repository root for the complete scanned notes.
- `C++ function types.pdf` — Focused handwritten notes about C++ function types and related concepts useful when writing STL-compatible callables and functors.

How to view

- Open the PDFs directly from the repository in your OS (double-click) or use your preferred PDF reader.
- On GitHub, these files will render in-browser when pushed to the remote repository.

If you'd like, I can add a short text summary or extract key pages from the handwritten notes into a plain-text `NOTES.md` for easier search and linking. Would you like that?

## 🚀 Getting Started

### Prerequisites
- C++ Compiler (GCC, Clang, or MSVC)
- C++11 or later standard
- Basic understanding of C++ syntax

### Compilation
```bash
# For any .cpp file
g++ -std=c++17 filename.cpp -o output
./output

# Example
g++ -std=c++17 Vector_stl_note/LearnVector.cpp -o vector_demo
./vector_demo
```

### Online Compilers
- [Replit](https://replit.com/)
- [OnlineGDB](https://www.onlinegdb.com/)
- [Compiler Explorer](https://godbolt.org/)

---

## 📖 Topics Covered

### 🔰 **Beginner Level**
- [x] **Vectors** - Dynamic arrays, capacity management
- [x] **Pairs** - Storing two related values
- [x] **Auto Keyword** - Type deduction in loops
- [x] **Basic Iterators** - Container traversal

### 🔥 **Intermediate Level**  
- [x] **Stacks & Queues** - LIFO and FIFO operations
- [x] **Priority Queues** - Heap data structure
- [x] **Deques** - Double-ended operations
- [x] **Lists** - Linked list implementation
- [x] **Sets** - Unique sorted elements
- [x] **Maps** - Key-value relationships

### ⚡ **Advanced Level**
- [x] **Unordered Containers** - Hash-based operations
- [x] **Multiset & Multimap** - Duplicate element handling
- [x] **Lower/Upper Bound** - Binary search operations
- [x] **Functors** - Custom function objects
- [x] **Advanced Iterators** - Bidirectional & random access

---

## 💻 Code Examples

### 📦 Vector Example
```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    
    for(auto it : v) {
        cout << it << " ";  // Output: 1 2 3 4
    }
    return 0;
}
```

### 🗂️ Map Example  
```cpp
#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> m;
    m["apple"] = 5;
    m["banana"] = 3;
    
    for(auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
```

### 🔍 Set with Custom Sorting
```cpp
#include <set>
#include <iostream>
using namespace std;

struct Descending {
    bool operator()(int a, int b) {
        return a > b;  // Descending order
    }
};

int main() {
    set<int, Descending> s = {3, 1, 4, 1, 5};
    // Output: 5 4 3 1 (sorted in descending order)
    
    for(int x : s) {
        cout << x << " ";
    }
    return 0;
}
```

---

## 🎯 How to Use

### 📚 **Study Approach**
1. **Start with basics**: Begin with `Vector_stl_note/LearnVector.cpp`
2. **Follow the order**: Progress through containers → iterators → algorithms
3. **Practice coding**: Modify examples and test different scenarios
4. **Reference cheatsheet**: Use `STL_CheatSheet.md` for quick lookup

### 🔍 **Each File Contains**:
- ✨ **Detailed comments** explaining each concept
- 📝 **Multiple examples** with different use cases  
- 🎯 **Expected outputs** for verification
- 💡 **Best practices** and common pitfalls
- ⚡ **Time complexity** information
- 🔧 **Real-world applications**

### 📋 **Learning Path**:
```
1. Auto & Iterators          → Understanding STL basics
2. Vector → Deque → List     → Sequence containers  
3. Stack → Queue → Priority  → Container adapters
4. Pair                      → Utility components
5. Set → Map                 → Associative containers
6. Unordered containers      → Hash-based structures
7. Functors                  → Advanced customization
```

---

## 🛠️ Features

- ✅ **Complete STL Coverage** - All major containers and algorithms
- ✅ **Beginner Friendly** - Step-by-step explanations
- ✅ **Code Examples** - Practical, runnable code
- ✅ **Expected Outputs** - Verify your understanding  
- ✅ **Performance Notes** - Time & space complexity
- ✅ **Best Practices** - Industry-standard coding patterns
- ✅ **Cheat Sheet** - Quick reference guide

---

## 🎓 Learning Outcomes

After completing this course, you will be able to:

- 🎯 **Choose the right container** for any programming problem
- ⚡ **Optimize code performance** using appropriate STL components  
- 🔧 **Implement complex algorithms** efficiently
- 💡 **Write cleaner, more maintainable** C++ code
- 🚀 **Solve competitive programming** problems effectively
- 🏗️ **Design better software architecture** using STL principles

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/AmazingFeature`)
3. **Commit** your changes (`git commit -m 'Add some AmazingFeature'`)
4. **Push** to the branch (`git push origin feature/AmazingFeature`)
5. **Open** a Pull Request

### 💡 **Contribution Ideas**:
- Add more advanced examples
- Include algorithm implementations
- Add performance benchmarks
- Improve documentation
- Fix bugs or typos

---

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

---

## 👨‍💻 Author

**Sayan Adhikary**
- GitHub: [@sayanadhi03](https://github.com/sayanadhi03)
- Focus: C++ STL, Data Structures, Algorithms

---

## 🙏 Acknowledgments

- C++ Standard Committee for creating such a powerful library
- The C++ community for continuous improvements and documentation
- All contributors who help make this resource better

---

## 📊 Repository Stats

![GitHub stars](https://img.shields.io/github/stars/sayanadhi03/Learn-C-STL-With-Notes?style=social)
![GitHub forks](https://img.shields.io/github/forks/sayanadhi03/Learn-C-STL-With-Notes?style=social)
![GitHub issues](https://img.shields.io/github/issues/sayanadhi03/Learn-C-STL-With-Notes)

---

**⭐ If you find this helpful, please consider giving it a star!**

**📚 Happy Learning C++ STL!** 🚀