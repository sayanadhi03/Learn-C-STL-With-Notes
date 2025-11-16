//                C++ STL UNORDERED_MAP FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. UNORDERED MAP (HASH TABLE BASED)
    //
    // ✔ Stores key-value pairs in RANDOM order (no sorting)
    // ✔ Fastest average time: O(1) for insert / erase / find
    // ✔ Keys must be UNIQUE
    //
    // ❌ Worst-case becomes O(n) when hash collisions occur
    //
    // WHEN TO USE unordered_map?
    // ✔ Fast lookup needed
    // ✔ Ordering does not matter
    // ✔ Competitive programming
    // ------------------------------------------------------------

    unordered_map<string, int> m;

    m.emplace("tv", 100);
    m.emplace("laptop", 100);
    m.emplace("fridge", 100);
    m.emplace("watch", 100);

    cout << "UNORDERED MAP CONTENTS (random order):\n";
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    /*
        Example Output (order varies every run):
        fridge -> 100
        watch -> 100
        tv -> 100
        laptop -> 100
    */

    cout << "\n";

    return 0;
}
