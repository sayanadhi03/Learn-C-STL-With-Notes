#include <iostream>
#include <list>
using namespace std;

int main()
{

    //
    //    WHEN TO USE std::list?
    //    ✔ When you need FAST insertion & deletion at ANY position   (O(1))
    //    ✔ When vector/deque becomes slow for insert/erase in middle
    //    ✔ When you frequently move/erase nodes using iterators
    //    ✔ When you don't need random-access (no indexing: l[0] ❌)
    //    ✔ When stability of iterators matters (list iterators never get invalidated)
    //
    //    When NOT to use list?
    //    ❌ When you need indexing (use vector/deque instead)
    //    ❌ When you need cache-friendly contiguous memory

    // ------------------------------------------------------------
    // 1. Creating a list (Doubly Linked List)
    // ------------------------------------------------------------
    list<int> l = {1, 2, 3};

    cout << "Initial list: ";
    for (int val : l)
        cout << val << " ";
    // Output: 1 2 3
    cout << "\n\n";

    // ------------------------------------------------------------
    // 2. push_back() & push_front()
    // ------------------------------------------------------------
    l.push_back(4); // adds element at the END
    l.push_back(5);
    l.push_front(0); // adds element at the BEGINNING
    l.push_front(-1);

    cout << "After push_front/back: ";
    for (int val : l)
        cout << val << " ";
    // Output: -1 0 1 2 3 4 5
    cout << "\n\n";

    // ------------------------------------------------------------
    // 3. emplace_back() & emplace_front()
    // Faster than push_ because it constructs in-place
    // ------------------------------------------------------------
    l.emplace_back(6);
    l.emplace_front(-2);

    cout << "After emplace_front/back: ";
    for (int val : l)
        cout << val << " ";
    // Output: -2 -1 0 1 2 3 4 5 6
    cout << "\n\n";

    // ------------------------------------------------------------
    // 4. pop_back() & pop_front()
    // ------------------------------------------------------------
    l.pop_back();  // removes 6
    l.pop_front(); // removes -2

    cout << "After pop_front/back: ";
    for (int val : l)
        cout << val << " ";
    // Output: -1 0 1 2 3 4 5
    cout << "\n\n";

    // ------------------------------------------------------------
    // 5. Accessing front() and back()
    // ------------------------------------------------------------
    cout << "Front element: " << l.front() << endl; // -1
    cout << "Back element : " << l.back() << endl;  // 5
    cout << "\n";

    // ------------------------------------------------------------
    // 6. Using iterators begin(), end(), rbegin(), rend()
    // ------------------------------------------------------------
    cout << "Forward traversal using iterators: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    // Output: -1 0 1 2 3 4 5
    cout << "\n";

    cout << "Reverse traversal using rbegin()/rend(): ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    // Output: 5 4 3 2 1 0 -1
    cout << "\n\n";

    // ------------------------------------------------------------
    // 7. Insert at any position
    // ------------------------------------------------------------
    auto it = l.begin();
    advance(it, 3); // move iterator to 3rd index (0-based)
    // l = -1 0 1 [it-->2] 3 4 5

    l.insert(it, 100); // insert 100 before 2

    cout << "After inserting 100 at index 3: ";
    for (int val : l)
        cout << val << " ";
    // Output: -1 0 1 100 2 3 4 5
    cout << "\n\n";

    // ------------------------------------------------------------
    // 8. Erasing an element
    // ------------------------------------------------------------
    it = l.begin();
    advance(it, 4); // points to value 2
    l.erase(it);    // erase the element 2

    cout << "After erasing element at index 4 (2): ";
    for (int val : l)
        cout << val << " ";
    // Output: -1 0 1 100 3 4 5
    cout << "\n\n";

    // ------------------------------------------------------------
    // 9. size() and clear()
    // ------------------------------------------------------------
    cout << "Size of list: " << l.size() << endl; // 7

    l.clear(); // removes all elements

    cout << "After clear(), is list empty? " << l.empty() << endl;
    // Output: 1 (true)

    return 0;
}
