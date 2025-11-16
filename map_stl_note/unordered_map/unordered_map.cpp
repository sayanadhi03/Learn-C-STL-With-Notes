# C++ STL: `unordered_map` — Full Notes (Updated)

**Created by: Sayan Adhikary**
GitHub: [https://github.com/sayanadhi03](https://github.com/sayanadhi03)

---

## 🔥 What is `unordered_map`?

`unordered_map` is a hash‑table based associative container that stores key–value pairs with **average O(1) time complexity** for:

* insertion
* deletion
* lookup

It does **NOT** maintain any order — elements are stored in **random order** depending on hash values.

---

## ✅ Key Features

### ✔ Fast (Average O(1))

All major operations are extremely fast because they use hashing.

### ✔ Unique Keys

Duplicate keys are **not allowed**.

### ✔ Random Order

No sorting — elements appear in arbitrary order.

### ✔ Implemented Using Hash Table

Provides constant‑time access based on key's hash.

---

## ⚠️ Drawbacks

* **Worst‑case O(n)** when many elements collide in the same hash bucket.
* Cannot use as ordered data structure.
* Only works with hashable key types.

---

## 🧠 When to Use `unordered_map`?

Use it when:

* You need **fast** key‑based access.
* Ordering **does not matter**.
* You are solving **competitive programming** or **CP‑style problems**.
* Working with frequencies, counters, or lookups.

Examples:

* Counting frequencies of words
* Storing visited nodes
* Mapping strings → integers

---

## 🧩 Basic Syntax

```cpp
unordered_map<KeyType, ValueType> m;
```

Example:

```cpp
unordered_map<string, int> m;
```

---

## ✨ Initialization Examples

```cpp
unordered_map<string, int> m = {
    {"apple", 50},
    {"banana", 20},
    {"orange", 30}
};
```

---

## 🛠 Common Operations

### ✔ Insert / Emplace

```cpp
m.emplace("tv", 100);
m.emplace("laptop", 100);
m.insert({"watch", 50});
```

### ✔ Access

```cpp
cout << m["tv"];      // inserts key if not present
auto it = m.find("tv");
```

### ✔ Looping through unordered_map

```cpp
for (auto p : m) {
    cout << p.first << " -> " << p.second << endl;
}
```

⚠ Order is **not** guaranteed.

### ✔ Erase

```cpp
m.erase("tv");
m.erase(m.find("laptop"));
```

### ✔ Check Existence

```
if (m.count("tv")) { ... }
```

---

## 🧪 Complete Example with OutputComments

`````cpp
// Creating an unordered_map
unordered_map<string, int> m;

// Inserting elements
m.emplace("tv", 100);      // insert key "tv" with value 100
m.emplace("laptop", 100);  // insert key "laptop"
m.emplace("fridge", 100);  // insert key "fridge"
m.emplace("watch", 100);   // insert key "watch"

// Printing unordered_map (order is random)
for (auto p : m) {
    cout << p.first << " -> " << p.second << endl;
    // Example output (actual order varies):
    // laptop -> 100
    // watch  -> 100
    // fridge -> 100
    // tv     -> 100
}
````cpp
unordered_map<string, int> m;
m.emplace("tv", 100);
m.emplace("laptop", 100);
m.emplace("fridge", 100);
m.emplace("watch", 100);

for(auto p : m) {
    cout << p.first << " -> " << p.second << endl;
}
`````

### Example Output (order varies):

```
fridge -> 100
watch  -> 100
laptop -> 100
tv     -> 100
```

---

## 🔍 `map` vs `unordered_map`

| Feature        | `map`        | `unordered_map`       |
| -------------- | ------------ | --------------------- |
| Ordering       | Sorted (BST) | No order (Hash Table) |
| Complexity     | O(log n)     | O(1) avg              |
| Duplicate keys | No           | No                    |
| Best for       | Ordered data | Fast access           |

---

## 📌 Notes

* Avoid using large complex objects as keys.
* Prefer `unordered_map` for CP.
* Use `map` when order matters.

---

## ✅ End of Notes


