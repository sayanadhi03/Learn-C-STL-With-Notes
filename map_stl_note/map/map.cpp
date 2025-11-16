//                C++ STL MAP FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <map>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. Creating a MAP
    // ------------------------------------------------------------
    // map<K, V> stores key-value pairs in SORTED ORDER (ascending)
    // Keys are UNIQUE.
    // Implemented internally using RED-BLACK TREE (balanced BST).
    //
    // WHEN TO USE map?
    // ✔ When you want key-value pairs
    // ✔ When order matters (sorted keys)
    // ✔ When you need log(n) insertion/search
    // ------------------------------------------------------------

    map<string, int> m;

    // operator[] inserts OR updates a key
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    // ------------------------------------------------------------
    // 2. insert() — inserts a pair
    // ------------------------------------------------------------
    m.insert({"camera", 25});

    // ------------------------------------------------------------
    // 3. emplace() — constructs pair in-place (faster than insert)
    // ------------------------------------------------------------
    m.emplace("mic", 75);

    // ------------------------------------------------------------
    // 4. Traversing a map (sorted by keys)
    // ------------------------------------------------------------
    cout << "Map contents (sorted by key):\n";
    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }
    /*
        Output (keys sorted alphabetically):
        camera -> 25
        headphones -> 50
        laptop -> 100
        mic -> 75
        tablet -> 120
        tv -> 100
        watch -> 50
    */
    cout << "\n";

    // ------------------------------------------------------------
    // 5. count(key) — checks if key exists (returns 0 or 1)
    // ------------------------------------------------------------
    cout << "Does 'tablet' exist? " << m.count("tablet") << endl; // 1
    cout << "Does 'phone' exist?  " << m.count("phone") << endl;  // 0
    cout << "\n";

    // ------------------------------------------------------------
    // 6. find(key) — returns iterator to key or m.end() if not found
    // ------------------------------------------------------------
    auto it = m.find("tv");
    if (it != m.end())
    {
        cout << "Found 'tv' with value: " << it->second << endl;
    }

    it = m.find("phone");
    if (it == m.end())
    {
        cout << "'phone' not found in map.\n";
    }
    cout << "\n";

    // ------------------------------------------------------------
    // 7. erase
    // ------------------------------------------------------------
    m.erase("watch"); // remove by key

    // remove using iterator
    it = m.find("camera");
    if (it != m.end())
        m.erase(it);

    cout << "After erase operations:\n";
    for (auto p : m)
        cout << p.first << " -> " << p.second << endl;

    /*
        Output after erase:
        headphones -> 50
        laptop -> 100
        mic -> 75
        tablet -> 120
        tv -> 100
    */
    cout << "\n";

    // ------------------------------------------------------------
    // 8. size(), empty(), clear()
    // ------------------------------------------------------------
    cout << "Map size: " << m.size() << endl; // 5

    m.clear();
    cout << "After clear(), is map empty? " << m.empty() << endl; // 1 (true)

    return 0;
}
