//                C++ STL STACK FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. STACK — LIFO (Last In First Out)
    //
    //    ✔ push()    → adds element to TOP
    //    ✔ emplace() → constructs element in-place (faster)
    //    ✔ top()     → returns the element at TOP
    //    ✔ pop()     → removes the TOP element
    //    ✔ size()
    //    ✔ empty()
    //    ✔ swap()
    //
    //    WHEN TO USE STACK?
    //    ✔ Reversing things (strings, arrays)
    //    ✔ Function call stack simulation
    //    ✔ Valid parentheses problems
    //    ✔ DFS (Depth First Search)
    //    ✔ Undo operations
    //
    //    Stack is NOT iterable (no begin(), no end())
    // ------------------------------------------------------------

    stack<int> s;

    // Pushing elements (LIFO)
    s.push(1); // stack: 1
    s.push(2); // stack: 2 on top of 1  →  2 1
    s.push(3); // stack: 3 on top →      3 2 1

    /*
        Stack visually looks like:

           TOP → 3
                  2
                  1
    */

    cout << "Top element = " << s.top() << endl;
    // Output: 3

    // ------------------------------------------------------------
    // 2. emplace() — faster than push()
    // ------------------------------------------------------------
    s.emplace(10); // directly constructs 10 at top
    // stack: 10 3 2 1

    cout << "Top after emplace = " << s.top() << endl;
    // Output: 10

    // ------------------------------------------------------------
    // 3. pop() — removes the top element
    // ------------------------------------------------------------
    s.pop(); // removes 10
    // stack becomes: 3 2 1

    cout << "Top after pop = " << s.top() << endl;
    // Output: 3

    // ------------------------------------------------------------
    // 4. size() and empty()
    // ------------------------------------------------------------
    cout << "Size of stack: " << s.size() << endl;
    // Output: 3

    cout << "Is stack empty? " << s.empty() << endl;
    // Output: 0 (false)

    // ------------------------------------------------------------
    // 5. swap() — swap contents of two stacks
    // ------------------------------------------------------------
    stack<int> s2;
    s2.push(100);
    s2.push(200);

    s.swap(s2);

    cout << "\nAfter swapping stacks:\n";
    cout << "Top of s  = " << s.top() << endl;  // 200
    cout << "Top of s2 = " << s2.top() << endl; // 3

    /*
        Before swap:
            s  = [3, 2, 1]
            s2 = [200, 100]

        After swap:
            s  = [200, 100]
            s2 = [3, 2, 1]
    */

    return 0;
}
