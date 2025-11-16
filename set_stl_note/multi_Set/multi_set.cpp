//                C++ STL MULTISET FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <set>
using namespace std;

int main()
{

    // multiset: sorted container that ALLOWS duplicate values
    // internally a balanced BST (like set) -> operations O(log n)

    multiset<int> s;

    // insert values
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // insert duplicates (multiset allows these)
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // print all elements (sorted, duplicates present)
    cout << "Elements in multiset: ";
    for (auto val : s)
        cout << val << " ";
    // Output: 1 1 2 2 3 3 4 5
    cout << endl;

    // size (counts duplicates)
    cout << "Size = " << s.size() << endl; // Output: 8

    // count(x) -> how many occurrences of x
    cout << "count(2) = " << s.count(2) << endl;   // Output: 2
    cout << "count(10) = " << s.count(10) << endl; // Output: 0

    // find -> returns iterator to ONE matching element (first occurrence in order)
    auto it = s.find(2);
    if (it != s.end())
    {
        cout << "Found one 2 at iterator -> " << *it << endl; // Output: Found one 2
    }

    // erase(value) -> removes ALL occurrences of value and returns number removed (C++11+)
    // If you want to erase only one occurrence, use erase(iterator).
    size_t removed = s.erase(3);                                  // removes all 3's
    cout << "Removed " << removed << " occurrences of 3" << endl; // Output: Removed 2 occurrences of 3

    cout << "After erase(3): ";
    for (auto v : s)
        cout << v << " ";
    // Output: 1 1 2 2 4 5
    cout << endl;

    // Erase a single occurrence using iterator:
    auto it2 = s.find(1); // points to first 1
    if (it2 != s.end())
    {
        s.erase(it2); // removes only one 1
    }

    cout << "After erasing one '1' via iterator: ";
    for (auto v : s)
        cout << v << " ";
    // Output: 1 2 2 4 5
    cout << endl;

    // clear and empty
    s.clear();
    cout << "After clear(), empty? " << s.empty() << endl; // Output: 1 (true)

    // ------------------------------------------------------------
    // WHEN TO USE multiset? (short)
    // ------------------------------------------------------------
    // ✅ Use multiset when:
    //   - You need sorted order AND allow duplicates
    //   - You want automatic ordering but must keep repeated values
    //   - Typical uses: frequency buckets that keep order, maintaining multi-valued keys
    //
    // ❌ Prefer other containers when:
    //   - You need unique values -> use set
    //   - You need O(1) average lookup and don't need order -> use unordered_multiset (or unordered_set)
    // ------------------------------------------------------------

    return 0;
}
