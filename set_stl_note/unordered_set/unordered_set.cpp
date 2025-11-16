//                C++ STL UNORDERED_SET FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // unordered_set stores UNIQUE elements using a hash table.
    // Average complexity: insert/find/erase -> O(1)
    // No ordering guaranteed (elements appear in arbitrary order).
    // cause this is not sorted set so here there no such thing as lower bound and upper bound concept in unordered set

    unordered_set<int> s;

    // Insert elements
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // Trying to insert duplicates (ignored)
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // Print all elements (order is arbitrary)
    cout << "Contents of unordered_set (order may vary): ";
    for (auto val : s)
        cout << val << " ";
    // Example Output (actual order may differ):
    // 3 1 4 5 2
    cout << endl;

    // Check existence: count / find
    cout << "count(3) = " << s.count(3) << endl;   // Output: 1
    cout << "count(10) = " << s.count(10) << endl; // Output: 0

    auto it = s.find(4);
    if (it != s.end())
        cout << "found: " << *it << endl; // found: 4
    else
        cout << "4 not found\n";

    // Erase by value
    s.erase(4); // removes 4 if present
    cout << "After erase(4), contains: ";
    for (auto v : s)
        cout << v << " ";
    // Example Output: 3 1 5 2
    cout << endl;

    // clear + empty
    s.clear();
    cout << "After clear(), empty? " << s.empty() << endl; // Output: 1 (true)

    // ------------------------------------------------------------
    // When to use unordered_set? (short)
    // ------------------------------------------------------------
    // ✅ Use unordered_set when:
    //    - You need FAST membership tests (O(1) average)
    //    - You do NOT care about element order
    //    - You need unique values only
    //    - Typical uses: frequency keys, visited sets, de-duplication
    //
    // ❌ Avoid unordered_set when:
    //    - You need sorted order (use set)
    //    - You need stable iteration order
    // ------------------------------------------------------------

    return 0;
}
