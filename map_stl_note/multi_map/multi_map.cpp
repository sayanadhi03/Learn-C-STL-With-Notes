//                C++ STL MULTIMAP FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <map>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. MULTIMAP (SORTED + DUPLICATE KEYS ALLOWED)
    //
    // ✔ Stores keys in SORTED ORDER
    // ✔ Allows MULTIPLE values for the SAME key
    // ✔ insert, erase, find → O(log n)
    //
    // WHEN TO USE multimap?
    // ✔ When duplicate keys are required
    // ✔ When sorted order is important
    // ------------------------------------------------------------

    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 200);
    m.emplace("tv", 300);
    m.emplace("tv", 400);

    // Erases only the FIRST occurrence of "tv"
    m.erase(m.find("tv"));

    cout << "MULTIMAP CONTENTS (sorted + duplicates allowed):\n";
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    /*
        Output:
        tv -> 200
        tv -> 300
        tv -> 400
    */

    cout << "\n";

    return 0;
}
