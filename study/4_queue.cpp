#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> myQueue;

    // Enqueue elements to the queue
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // Display the front element
    cout << "Front element: " << myQueue.front() << endl;

    // Dequeue the front element
    myQueue.pop();

    // Display the front element after dequeue
    cout << "Front element after pop: " << myQueue.front() << endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Size of the queue
    cout << "Queue size: " << myQueue.size() << endl;

    // Enqueue more elements
    myQueue.push(4);
    myQueue.push(5);

    // Display all elements using a loop
    cout << "Elements in the queue: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;

    // Check if the queue is empty again
    if (myQueue.empty()) {
        cout << "Queue is empty now." << endl;
    }

    return 0;
}
