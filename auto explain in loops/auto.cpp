#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Creating a vector with 5 integers
    // v = {1, 2, 3, 4, 5}
    vector<int> v = {1, 2, 3, 4, 5};


    // ------------------------------------------------------------
    // 1. RANGE-BASED LOOP USING COPY (auto x : v)
    // ------------------------------------------------------------
    cout << "Using range-based for loop (auto x : v):\n";

    /*
        auto x : v
        - 'auto' detects the type → int
        - 'x' receives a COPY of each element of the vector
        - So this loop prints the elements, but does NOT modify the vector

        Internally it behaves like:
            for (int x : v)

        Important:
        - Any change done to x will NOT affect the vector
        - Use this only when you want to READ values and copying is OK
    */

    for (auto x : v) {
        cout << x << " ";
    }

    // Output:
    // 1 2 3 4 5

    cout << "\n\n";


    // ------------------------------------------------------------
    // 2. RANGE-BASED LOOP USING REFERENCE (auto &x : v)
    // ------------------------------------------------------------
    cout << "Using reference (auto &x : v):\n";

    /*
        auto &x : v
        - '&' means x is a REFERENCE to each element
        - No copying happens (faster)
        - Any modification to x will directly modify the vector

        Internally it behaves like:
            for (int &x : v)

        Use this when:
        - You want to avoid copies (performance)
        - You want to modify the vector elements
    */

    for (auto &x : v) {
        cout << x << " ";
    }

    // Output:
    // 1 2 3 4 5 (same values, since we are only printing)

    cout << "\n\n";


    // ------------------------------------------------------------
    // 3. RANGE-BASED LOOP USING CONST REFERENCE (const auto &x : v)
    // ------------------------------------------------------------
    cout << "Using const reference (const auto &x : v):\n";

    /*
        const auto &x : v
        - '&' means reference → NO copying
        - 'const' means the values CANNOT be changed inside the loop

        This is the BEST and SAFEST way to loop when:
        - You only need to read elements
        - You want speed (no copies)
        - You want safety (you can't accidentally modify anything)

        Internally:
            for (const int &x : v)
    */

    for (const auto &x : v) {
        cout << x << " ";
    }

    // Output:
    // 1 2 3 4 5

    cout << "\n\n";


    // ------------------------------------------------------------
    // 4. MODIFYING THE VECTOR USING REFERENCE LOOP
    // ------------------------------------------------------------
    cout << "Modifying elements using reference loop...\n";

    /*
        Here we use auto& again because:
        - We WANT to modify the original vector
        - Using reference avoids copying and allows direct modification
    */

    for (auto &x : v) {
        x = x * 10;   // multiply each value by 10
    }

    /*
        Now vector becomes:
        v = {10, 20, 30, 40, 50}
    */


    // ------------------------------------------------------------
    // 5. PRINTING THE MODIFIED VECTOR
    // ------------------------------------------------------------
    cout << "Modified vector: ";

    for (auto x : v) {
        // auto x (copy) is fine here, since we are only printing
        cout << x << " ";
    }

    // Output:
    // 10 20 30 40 50

    cout << "\n";

    return 0;
}
