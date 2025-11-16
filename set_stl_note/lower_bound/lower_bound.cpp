//                C++ STL SET lower_bound FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <set>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 🌟 What is lower_bound() in set?
    //
    // lower_bound(x):
    //   ➤ Returns iterator to the FIRST element >= x
    //   ➤ Works in O(log n)
    //   ➤ If no such element exists → returns s.end()
    //
    // Note:
    //   set stores UNIQUE and SORTED values ( BST )
    // ------------------------------------------------------------

    // ------------------------------------------------------------
    // 🎯 WHEN TO USE lower_bound()
    // ------------------------------------------------------------
    // ✅ Use it when:
    //    • You want the first element >= x
    //         (helpful in range queries, closest value search)
    //    • You want to check if a value exists or find its
    //      next greater element.
    //
    // ❌ Do NOT use when:
    //    • You need the element strictly greater → use upper_bound()
    //    • You need index-based searching → use vector
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
    s.insert(6);

    // Set now: {1, 2, 3, 4, 5, 6}

    // ------------------------------------------------------------
    // 2. Using lower_bound()
    // ------------------------------------------------------------
    auto it = s.lower_bound(4);

    if (it != s.end())
    {
        cout << "lower_bound(4) = " << *it << endl;
        // Output: 4
        // Because 4 exists and it is the first element >= 4
    }
    else
    {
        cout << "lower_bound(4) returned s.end() (no element >= 4)" << endl;
    }

    cout << "\n";

    // ------------------------------------------------------------
    // 3. lower_bound() when the element does NOT exist
    // ------------------------------------------------------------
    auto it2 = s.lower_bound(10);

    if (it2 != s.end())
    {
        cout << "lower_bound(10) = " << *it2 << endl;
    }
    else
    {
        cout << "lower_bound(10) = s.end()" << endl;
        // Output: s.end()
        // Because NO element >= 10 exists
    }

    cout << "\n";

    // ------------------------------------------------------------
    // 4. Printing entire set
    // ------------------------------------------------------------
    cout << "Elements in set: ";
    for (auto v : s)
        cout << v << " ";
    // Output: 1 2 3 4 5 6
    cout << endl;

    return 0;
}
