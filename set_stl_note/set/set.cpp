//                C++ STL SET FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <set>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 🌟 WHAT IS set?
    // set = Balanced BST (Red-Black Tree)
    // Stores UNIQUE + SORTED values
    // Time Complexity:
    //      insert  → O(log n)
    //      erase   → O(log n)
    //      find    → O(log n)
    // ------------------------------------------------------------

    // ------------------------------------------------------------
    // 🎯 WHEN TO USE set
    // ------------------------------------------------------------
    // ✅ Use set when:
    //    1. You need UNIQUE elements
    //       Example: roll numbers, IDs
    //
    //    2. You want AUTOMATICALLY SORTED data
    //       (no need to call sort())
    //
    //    3. You need FAST search/insert/delete
    //       All operations are O(log n)
    //
    // ❌ Do NOT use set when:
    //    - You need duplicates      → use multiset
    //    - You don't need order     → use unordered_set (O(1))
    //    - You want index access    → use vector / deque
    // ------------------------------------------------------------

    // ------------------------------------------------------------
    // 1. Creating a set
    // ------------------------------------------------------------
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // Duplicates (ignored automatically)
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // ------------------------------------------------------------
    // 2. Print size() and all elements
    // ------------------------------------------------------------
    cout << "Set size = " << s.size() << endl;
    // Output: 5 (because duplicates ignored)

    cout << "Elements in set: ";
    for (auto val : s)
        cout << val << " ";
    // Output: 1 2 3 4 5
    cout << "\n\n";

    // ------------------------------------------------------------
    // 3. count() → checks existence (1 or 0)
    // ------------------------------------------------------------
    cout << "Count of 3 = " << s.count(3) << endl;   // Output: 1
    cout << "Count of 10 = " << s.count(10) << endl; // Output: 0
    cout << "\n";

    // ------------------------------------------------------------
    // 4. find() → returns iterator
    // ------------------------------------------------------------
    auto it = s.find(3);
    if (it != s.end())
        cout << "Element 3 found!\n";
    else
        cout << "Element not found!\n";

    // Output:
    // Element 3 found!
    cout << "\n";

    // ------------------------------------------------------------
    // 5. erase() → remove element in O(log n)
    // ------------------------------------------------------------
    s.erase(3); // removes element '3'

    cout << "After erasing 3: ";
    for (auto val : s)
        cout << val << " ";
    // Output: 1 2 4 5
    cout << "\n\n";

    // ------------------------------------------------------------
    // 6. clear() & empty()
    // ------------------------------------------------------------
    s.clear();

    cout << "Is set empty? " << s.empty() << endl;
    // Output: 1 (true)

    return 0;
}
