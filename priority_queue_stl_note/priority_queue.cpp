//                C++ STL PRIORITY QUEUE FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{

    // ------------------------------------------------------------
    // 1. PRIORITY QUEUE (MAX HEAP BY DEFAULT)
    //
    //    Stores elements such that the LARGEST element
    //    always stays at the TOP.
    //
    //    Internal structure: Max Heap
    //
    //    ✔ push(x)     - insert element
    //    ✔ emplace(x)  - faster insertion (in-place)
    //    ✔ top()       - returns current maximum
    //    ✔ pop()       - removes maximum
    //    ✔ size()
    //    ✔ empty()
    //
    //    WHEN TO USE PRIORITY QUEUE?
    //    ✔ When you always need the largest/smallest element quickly
    //    ✔ Dijkstra’s Algorithm (shortest path)
    //    ✔ Task scheduling
    //    ✔ K largest/smallest problems
    //    ✔ Streaming data (keep top K elements)
    // ------------------------------------------------------------

    priority_queue<int> pq; // MAX HEAP

    pq.push(5);  // heap: 5
    pq.push(3);  // heap: 5, 3
    pq.push(10); // heap: 10, 5, 3
    pq.push(4);  // heap: 10, 5, 4, 3

    cout << "Max-Heap output (priority_queue<int>): ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    // Output: 10 5 4 3
    cout << "\n\n";

    // ------------------------------------------------------------
    // 2. MIN HEAP
    //
    //    To make a MIN-HEAP in C++:
    //
    //    priority_queue<
    //          int,
    //          vector<int>,
    //          greater<int>
    //    > pq;
    //
    //    Here:
    //    - vector<int> is the underlying container
    //    - greater<int> makes smallest element highest priority
    // ------------------------------------------------------------

    priority_queue<int, vector<int>, greater<int>> minpq; // MIN HEAP

    minpq.push(5);
    minpq.push(3);
    minpq.push(10);
    minpq.push(4);

    cout << "Min-Heap output: ";
    while (!minpq.empty())
    {
        cout << minpq.top() << " ";
        minpq.pop();
    }
    // Output: 3 4 5 10
    cout << "\n\n";

    // ------------------------------------------------------------
    // 3. emplace() vs push()
    // ------------------------------------------------------------
    priority_queue<pair<int, int>> pairpq;

    pairpq.emplace(1, 100); // in-place construction
    pairpq.push({2, 200});  // temporary pair created first

    cout << "Pair PQ (max-heap based on first element): ";
    while (!pairpq.empty())
    {
        auto p = pairpq.top();
        cout << "(" << p.first << "," << p.second << ") ";
        pairpq.pop();
    }
    // Output: (2,200) (1,100)
    cout << "\n";

    return 0;
}
