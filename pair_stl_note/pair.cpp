//                C++ STL PAIR FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. Basic Pair usage
    //
    //    pair<T1, T2>  → stores TWO values together
    //    p.first       → first value
    //    p.second      → second value
    //
    //    WHEN TO USE pair?
    //    ✔ When you want to group 2 related values
    //    ✔ When returning 2 values from a function
    //    ✔ When storing key–value style data without full map
    //    ✔ When using vector/list/deque of pairs
    //
    //    ✔ VERY COMMON in competitive programming
    // ------------------------------------------------------------
    pair<int, int> p1 = {3, 5};
    pair<char, int> p2 = {'a', 1};

    cout << "Basic pairs:\n";
    cout << p1.first << " " << p1.second << endl; // Output: 3 5
    cout << p2.first << " " << p2.second << endl; // Output: a 1
    cout << "\n";

    // ------------------------------------------------------------
    // 2. Vector of pairs
    //-------------------------------------------------------------
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    cout << "Vector of pairs (initial):\n";
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    /*
        Output:
        1 2
        2 3
        3 4
    */
    cout << "\n";

    // ------------------------------------------------------------
    // 3. push_back() for pairs
    //    - Creates a pair first, then pushes it
    //-------------------------------------------------------------
    vec.push_back({4, 5}); // insert pair (4,5)

    // ------------------------------------------------------------
    // 4. emplace_back() for pairs
    //    - Constructs pair (4,5) directly inside the vector
    //    - Faster than push_back()
    //-------------------------------------------------------------
    vec.emplace_back(6, 7); // in-place construction

    cout << "After push_back and emplace_back:\n";
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    /*
        Output:
        1 2
        2 3
        3 4
        4 5
        6 7
    */
    cout << "\n";

    // ------------------------------------------------------------
    // 5. Range-based loop WITH explicit pair type
    // ------------------------------------------------------------
    cout << "Range-based loop (explicit pair type):\n";

    for (pair<int, int> p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    /*
        Output:
        1 2
        2 3
        3 4
        4 5
        6 7
    */

    return 0;
}
