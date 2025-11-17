                                        // ✅ STL Algorithms — Clean Code With Comments & Outputs


                                //                C++ STL ALGORITHMS FULL NOTES (UPDATED)
                                //      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
                                // ------------------------------------------------------------



                // ⭐ 1. reverse(v.begin(), v.end())

                // ✔ Reverses the entire container
                // ✔ Time: O(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3, 4, 5};

    reverse(v.begin(), v.end());  
    // reverses entire vector → {5, 4, 3, 2, 1}

    for(int x : v) cout << x << " ";
    // Output: 5 4 3 2 1
}

                                        // ⭐ 2. next_permutation(v.begin(), v.end())

                                        // ✔ Gives the next lexicographical permutation
                                        // ✔ If last permutation → returns the first sorted permutation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3};

    next_permutation(v.begin(), v.end());
    // Next permutation → {1, 3, 2}

    for(int x : v) cout << x << " ";
    // Output: 1 3 2
}

                                        // ⭐ 3. max_element & min_element

                                        // ✔ Finds largest & smallest element
                                        // ✔ Returns iterator


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {4, 9, 1, 7, 3};

    int mx = *max_element(v.begin(), v.end()); // 9
    int mn = *min_element(v.begin(), v.end()); // 1

    cout << "Max = " << mx << endl;  // Max = 9
    cout << "Min = " << mn << endl;  // Min = 1
}

                                        // ⭐ 4. binary_search(v.begin(), v.end(), target)

                                        // ✔ Works only on sorted data
                                        // ✔ Returns true or false


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {1, 3, 5, 7, 9};

    bool found = binary_search(v.begin(), v.end(), 7);

    cout << found << endl; 
    // Output: 1 (means true)
}

                                    // ⭐ 5. Count Set Bits (__builtin_popcount)
                                    
                                    // ✔ Very fast bit counting
                                    // ✔ Works for int, long, long long


#include <iostream>
using namespace std;

int main() {

    int x = 29;  
    // 29 in binary = 11101 → 4 set bits

    cout << __builtin_popcount(x) << endl;      
    // Output: 4

    long long y = 127;
    cout << __builtin_popcountll(y) << endl;    
    // Output: 7
}

// ⭐ WHEN TO USE THESE ALGORITHMS?

// Algorithm	When to Use
// reverse()	When you need to flip array/vector quickly
// next_permutation()	When solving permutation-based problems (strings, numbers)
// max_element()/min_element()	Fastest way to find global max/min
// binary_search()	Need very fast search in sorted array
// __builtin_popcount()	Bit manipulation, DP, set-bit problems