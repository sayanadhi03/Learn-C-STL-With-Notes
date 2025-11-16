// ------------------------------------------------------------
//                C++ STL VECTOR FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {

// ------------------------------------------------------------
// 1. DECLARATION
// ------------------------------------------------------------

    vector<int> vec1;                 // empty vector
    vector<int> vec2 = {1, 2};        // initialization list
    vector<int> vec3(3, 10);          // size 3, all values = 10
    vector<int> vec4(vec2);           // copy constructor

// ------------------------------------------------------------
// 2. SIZE AND CAPACITY
// ------------------------------------------------------------

    vector<int> v;
    cout << "Initial size: " << v.size() << endl;
    cout << "Initial capacity: " << v.capacity() << endl;

    v.push_back(1);   // capacity becomes 1
    v.push_back(2);   // capacity becomes 2
    v.push_back(3);   // capacity becomes 4 (growth)
    v.push_back(4);   // stays 4
    v.push_back(5);   // capacity becomes 8

    cout << "\nAfter pushes:" << endl;
    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl;

// ------------------------------------------------------------
// 3. PUSH_BACK, POP_BACK, EMPLACE_BACK
// ------------------------------------------------------------

    vector<int> a = {10, 20};

    a.push_back(30);     // adds at end
    a.emplace_back(40);  // constructs in place (faster)

    a.pop_back();        // removes last element (40)

// ------------------------------------------------------------
// 4. ACCESSING ELEMENTS: at() and []
// ------------------------------------------------------------
    cout << "\nAccess using at(): " << a.at(0) << endl;
    cout << "Access using []: " << a[1] << endl;

    cout << "Front element: " << a.front() << endl;
    cout << "Back element: " << a.back() << endl;

// ------------------------------------------------------------
// 5. ERASE, INSERT, CLEAR, EMPTY
// ------------------------------------------------------------
    vector<int> b = {1, 2, 3, 4, 5};

    b.erase(b.begin() + 2); // remove value 3
    b.insert(b.begin() + 1, 100);

    b.clear(); // makes vector empty

    cout << "\nIs b empty? " << b.empty() << endl; // 1 (true)

// ------------------------------------------------------------
// 6. ITERATORS (VERY IMPORTANT)
// ------------------------------------------------------------
    vector<int> c = {1, 2, 3, 4, 5};

    // ------------------------------
    // begin() → points to first element (index 0)
    // end()   → points to one past last element (index size)
    // ------------------------------

    cout << "\nForward using begin() & end(): ";

    for (auto it = c.begin(); it != c.end(); it++) {
        // *it dereferences the iterator → gives value
        cout << *it << " ";
    }
    // Output: 1 2 3 4 5

    // ------------------------------
    // Reverse Iterators:
    // rbegin() → last element
    // rend()   → before first element
    // ------------------------------
    cout << "\nBackward using rbegin() & rend(): ";

    for (auto it = c.rbegin(); it != c.rend(); it++) {
        cout << *it << " ";
    }
    // Output: 5 4 3 2 1

// ------------------------------------------------------------
// 7. Iterator Explanation
// ------------------------------------------------------------

    // c.begin() points to first element
    // *(c.begin()) dereferences it → gives the actual value

    cout << "\nFirst element using *(c.begin()): ";
    cout << *(c.begin()) << endl; // prints 1

// ------------------------------------------------------------
    return 0;
}
