
// ---

// # ✅ ** 2. `FUNCTORS.md` — Complete Markdown File **

// 🚀 C ++ STL FUNCTORS FULL NOTES(UPDATED)
// Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ---

// # 📌 What is a Functor ?

// A **Functor** is simply a **class that behaves like a function**
// because it overloads the `()` operator.

// Used heavily in:
// - Sorting
// - Custom comparison in priority queue
// - Custom comparison in set/map

// -----------------------------------------------
// EXAMPLE 1 : Functor with set / map
// ------------------------------------------------

#include <iostream>
#include <set>
            using namespace std;

// Functor (Comparator) for sorting in DESCENDING order
struct Desc
{
    // operator() makes this object callable like a function
    bool operator()(int a, int b) const
    {
        return a > b;
        // If 'a > b' is true, 'a' comes before 'b'
        // This creates a descending order set
    }
};

int main()
{

    // Set using custom comparator (functor)
    // Default set gives ASC order -> {1, 2, 4}
    // With Desc functor -> DESC order -> {4, 2, 1}
    set<int, Desc> s;

    // inserting elements
    s.insert(1);
    s.insert(4);
    s.insert(2);

    // printing elements
    for (int x : s)
        cout << x << " ";
    // Output: 4 2 1   (sorted using functor)

    return 0;
}


