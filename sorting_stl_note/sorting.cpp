//                C++ STL ALGORITHMS - SORTING FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. BASIC SORTING (ASCENDING)
    // ------------------------------------------------------------
    int arr[] = {1, 8, 5, 3};
    int n = 4;

    // sort(start_pointer, end_pointer)
    sort(arr, arr + n); // sorts in ascending order

    cout << "Sorted array (ascending): ";
    for (int x : arr)
        cout << x << " ";
    // Output: 1 3 5 8
    cout << "\n\n";

    // ------------------------------------------------------------
    // 2. SORTING IN DESCENDING ORDER USING greater<int>()
    // ------------------------------------------------------------
    sort(arr, arr + n, greater<int>());

    cout << "Sorted array (descending): ";
    for (int x : arr)
        cout << x << " ";
    // Output: 8 5 3 1
    cout << "\n\n";

    // ------------------------------------------------------------
    // 3. SORTING A VECTOR OF PAIRS (DEFAULT SORT)
    //    - By default: sorts by first element
    //    - If first is same → sorts by second
    // ------------------------------------------------------------
    vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    sort(vec.begin(), vec.end()); // default sort

    cout << "Default pair sorting:\n";
    for (auto p : vec)
        cout << p.first << " " << p.second << endl;
    /*
        Output (sorted by first):
        2 1
        3 1
        5 2
        7 1
    */
    cout << "\n";

    // ------------------------------------------------------------
    // 4. CUSTOM COMPARATOR FOR PAIRS
    //    Sort by SECOND element
    // ------------------------------------------------------------
    // [] This means it's a lambda (like a mini function without a name).
    auto comparator1 = [](const pair<int, int> &p1, const pair<int, int> &p2)
    {
        return p1.second < p2.second; // sort by second value (smallest first)
    };

    sort(vec.begin(), vec.end(), comparator1);

    cout << "Sorted by SECOND element:\n";
    for (auto p : vec)
        cout << p.first << " " << p.second << endl;
    /*
        Output:
        3 1
        2 1
        7 1
        5 2
    */
    cout << "\n";

    // ------------------------------------------------------------
    // 5. ADVANCED COMPARATOR
    //    1. Sort by SECOND element
    //    2. If second is same → sort by FIRST
    // ------------------------------------------------------------
    auto comparator2 = [](pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second != p2.second)
            return p1.second < p2.second; // rule-1: second
        return p1.first < p2.first;       // rule-2: first
    };

    sort(vec.begin(), vec.end(), comparator2);

    cout << "Sorted by SECOND, then FIRST:\n";
    for (auto p : vec)
        cout << p.first << " " << p.second << endl;
    /*
        Output:
        2 1
        3 1
        7 1
        5 2
    */

    return 0;
}
