#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    // inserting elements (set stores unique + sorted values)
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // ------------------------------------------------------------
    // lower_bound(x):
    // → first element >= x
    // Example: lower_bound(4) → 4
    //
    // upper_bound(x):
    // → first element > x
    // Example: upper_bound(4) → 5
    //
    // WHEN TO USE:
    // ✔ Finding the next greater or equal element
    // ✔ Range queries (like finding first element ≥ L)
    // ✔ Binary search type problems in sorted containers
    //
    // WHERE USED COMMONLY:
    // ✔ Competitive programming
    // ✔ Next greater element problems
    // ✔ Scheduling / interval problems
    // ✔ Finding smallest number >= target
    // ------------------------------------------------------------

    cout << "lower bound = " << *(s.lower_bound(4)) << endl; // 4
    cout << "upper bound = " << *(s.upper_bound(4)) << endl; // 5

    // printing the whole set
    for (auto val : s)
    {
        cout << val << " ";
    }
    // Output: 1 2 3 4 5
    cout << endl;

    return 0;
}
