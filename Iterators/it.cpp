// # 🚀 C ++ STL ITERATORS FULL NOTES(UPDATED)
// ### Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ---

// # 📌 What Are Iterators ?

// Iterators in C++ work like *pointers* that allow you to move through STL containers  
// (vector, set, map, list, deque, etc.).

// They do **not store values** — they **point to values**.



// - `it` points to the value `10`
// - `*it` prints the value
// - `it++` moves to next element



// # 🧪 Basic Example


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // iterator pointing to first element
    vector<int>::iterator it = v.begin();

    cout << "First element = " << *it << endl; // Output: 10

    cout << "All elements: ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    // Output: 10 20 30 40
}
