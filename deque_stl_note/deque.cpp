//                C++ STL DEQUE FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {

    // ------------------------------------------------------------
    // 1. Creating a deque (Double Ended Queue)
    //    Allows insertion & deletion from both ends in O(1)
    //
    //    WHEN TO USE DEQUE?
    //    ✔ When you need fast push/pop from BOTH front and back
    //    ✔ When vector is slow for push_front()
    //    ✔ When you need random-access (unlike list)
    //    ✔ When you want a mix of queue + vector behavior
    // ------------------------------------------------------------
    deque<int> d = {1, 2, 3};

    cout << "Initial deque: ";
    for (int x : d) cout << x << " ";
    // Output: 1 2 3
    cout << "\n\n";


    // ------------------------------------------------------------
    // 2. push_back() & push_front()
    // ------------------------------------------------------------
    d.push_back(4);   // [1,2,3,4]
    d.push_front(0);  // [0,1,2,3,4]

    cout << "After push_front(0) & push_back(4): ";
    for (int x : d) cout << x << " ";
    // Output: 0 1 2 3 4
    cout << "\n\n";


    // ------------------------------------------------------------
    // 3. emplace_back() & emplace_front()
    //    Constructs element in-place (faster)
    // ------------------------------------------------------------
    d.emplace_back(5);    // [0,1,2,3,4,5]
    d.emplace_front(-1);  // [-1,0,1,2,3,4,5]

    cout << "After emplace_front(-1) & emplace_back(5): ";
    for (int x : d) cout << x << " ";
    // Output: -1 0 1 2 3 4 5
    cout << "\n\n";


    // ------------------------------------------------------------
    // 4. pop_front() & pop_back()
    // ------------------------------------------------------------
    d.pop_front();   // remove -1
    d.pop_back();    // remove 5

    cout << "After pop_front() & pop_back(): ";
    for (int x : d) cout << x << " ";
    // Output: 0 1 2 3 4
    cout << "\n\n";


    // ------------------------------------------------------------
    // 5. Access elements: front(), back(), operator[], at()
    // ------------------------------------------------------------
    cout << "front(): " << d.front() << "\n"; // 0
    cout << "back(): "  << d.back()  << "\n"; // 4
    cout << "d[2] = "   << d[2]      << "\n"; // 2
    cout << "at(2) = "  << d.at(2)   << "\n"; // 2

    cout << "\n";


    // ------------------------------------------------------------
    // 6. Iterators
    // ------------------------------------------------------------
    cout << "Forward traversal: ";
    for (auto it = d.begin(); it != d.end(); it++)
        cout << *it << " ";
    // Output: 0 1 2 3 4
    cout << "\n";

    cout << "Reverse traversal: ";
    for (auto it = d.rbegin(); it != d.rend(); it++)
        cout << *it << " ";
    // Output: 4 3 2 1 0
    cout << "\n\n";


    // ------------------------------------------------------------
    // 7. insert() → inserts BEFORE iterator position
    // ------------------------------------------------------------
    auto it = d.begin();
    advance(it, 3);   // moves to index 3 → value 3

    d.insert(it, 100);  // insert BEFORE 3

    cout << "After inserting 100 before index 3: ";
    for (int x : d) cout << x << " ";
    // Output: 0 1 2 100 3 4
    cout << "\n\n";


    // ------------------------------------------------------------
    // 8. Insert AFTER an element using next(it)
    // ------------------------------------------------------------
    auto pos = find(d.begin(), d.end(), 100);
    d.insert(next(pos), 200); // insert AFTER 100

    cout << "After inserting 200 after 100: ";
    for (int x : d) cout << x << " ";
    // Output: 0 1 2 100 200 3 4
    cout << "\n\n";


    // ------------------------------------------------------------
    // 9. erase() → remove a single element
    // ------------------------------------------------------------
    auto pos2 = find(d.begin(), d.end(), 200);
    d.erase(pos2);

    cout << "After erasing 200: ";
    for (int x : d) cout << x << " ";
    // Output: 0 1 2 100 3 4
    cout << "\n\n";


    // ------------------------------------------------------------
    // 10. Erase a RANGE [start, end)
    // ------------------------------------------------------------
    auto s = d.begin(); advance(s, 1); // index 1 → value 1
    auto e = d.begin(); advance(e, 3); // index 3 → value 100

    d.erase(s, e); // erase index 1..2

    cout << "After erase range (index 1 to 2): ";
    for (int x : d) cout << x << " ";
    // Output: 0 100 3 4
    cout << "\n\n";


    // ------------------------------------------------------------
    // 11. size(), empty(), clear()
    // ------------------------------------------------------------
    cout << "Size: " << d.size() << "\n";        // 4
    cout << "Empty? " << d.empty() << "\n";      // 0 (false)

    d.clear();
    cout << "After clear(): size=" << d.size()
         << ", empty=" << d.empty() << "\n";
    // Output: size=0, empty=1

    return 0;
}
