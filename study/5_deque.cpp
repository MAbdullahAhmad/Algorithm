#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Declare a deque of integers
    deque<int> myDeque;

    // Add elements to the deque
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_front(0);
    myDeque.push_front(-1);

    // Display the elements using range-based for loop
    cout << "Deque elements: ";
    for (const auto &element : myDeque) {
        cout << element << " ";
    }
    cout << endl;

    // Access elements using index
    cout << "Element at index 2: " << myDeque[2] << endl;

    // Remove an element from the front
    myDeque.pop_front();

    // Display the elements after popping from the front
    cout << "Deque elements after pop_front: ";
    for (const auto &element : myDeque) {
        cout << element << " ";
    }
    cout << endl;

    // Remove an element from the back
    myDeque.pop_back();

    // Display the elements after popping from the back
    cout << "Deque elements after pop_back: ";
    for (const auto &element : myDeque) {
        cout << element << " ";
    }
    cout << endl;

    // Check if the deque is empty
    if (myDeque.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Deque is not empty." << endl;
    }

    // Size of the deque
    cout << "Deque size: " << myDeque.size() << endl;

    return 0;
}
