//                C++ STL QUEUE FULL NOTES (UPDATED)
//      Created by: Sayan Adhikary (https://github.com/sayanadhi03)
// ------------------------------------------------------------

#include <iostream>
#include <queue>
using namespace std;

int main() {

    // ------------------------------------------------------------
    // 1. QUEUE — FIFO (First In First Out)
    //
    //    ✔ push()    → adds element at the BACK
    //    ✔ emplace() → constructs element in-place at BACK
    //    ✔ front()   → element at the FRONT (first inserted)
    //    ✔ pop()     → removes FRONT element
    //    ✔ size()
    //    ✔ empty()
    //    ✔ swap()
    //
    //    WHEN TO USE QUEUE?
    //    ✔ When order of processing matters (FIFO)
    //    ✔ Level Order Traversal (BFS) in Trees/Graphs
    //    ✔ Task scheduling, CPU scheduling
    //    ✔ Producer–Consumer problems
    //    ✔ Simulation of real-life queues (printer queue, customer queue)
    //
    //    NOTE:
    //    - Queue does NOT support iteration (no begin(), no end())
    // ------------------------------------------------------------

    queue<int> q;

    // ------------------------------------------------------------
    // 2. push() — insert at REAR
    // ------------------------------------------------------------
    q.push(1);  // queue: 1
    q.push(2);  // queue: 1, 2
    q.push(3);  // queue: 1, 2, 3

    /*
        Diagram (from image):

        FRONT --> 1  2  3 <-- REAR
    */

    cout << "Front element = " << q.front() << endl;
    // Output: 1


    // ------------------------------------------------------------
    // 3. emplace() — faster insertion (constructs in place)
    // ------------------------------------------------------------
    q.emplace(10);  // queue: 1, 2, 3, 10

    cout << "Front after emplace = " << q.front() << endl;
    // Output: 1


    // ------------------------------------------------------------
    // 4. pop() — removes FRONT
    // ------------------------------------------------------------
    q.pop(); // removes 1
    // queue: 2, 3, 10

    cout << "Front after pop = " << q.front() << endl;
    // Output: 2


    // ------------------------------------------------------------
    // 5. size() and empty()
    // ------------------------------------------------------------
    cout << "Size of queue: " << q.size() << endl;  
    // Output: 3

    cout << "Is queue empty? " << q.empty() << endl;
    // Output: 0 (false)


    // ------------------------------------------------------------
    // 6. swap() — swap contents of two queues
    // ------------------------------------------------------------
    queue<int> q2;
    q2.push(100);
    q2.push(200);

    q.swap(q2);

    cout << "\nAfter swapping queues:\n";
    cout << "Front of q  = " << q.front() << endl;   // 100
    cout << "Front of q2 = " << q2.front() << endl;  // 2

    /*
        Before swap:
            q  = [2, 3, 10]
            q2 = [100, 200]

        After swap:
            q  = [100, 200]
            q2 = [2, 3, 10]
    */

    return 0;
}
