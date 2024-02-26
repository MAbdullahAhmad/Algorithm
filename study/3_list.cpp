#include <iostream>
#include <list>
using namespace std;

int main() {
    // Declare a list of integers
    list<int> myList;

    // Add elements to the list
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    // Display the elements using iterator
    cout << "List elements: ";
    for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Add more elements to the front of the list
    myList.push_front(0);
    myList.push_front(-1);

    // Display the elements using range-based for loop
    cout << "Updated list elements: ";
    for (const auto &element : myList) {
        cout << element << " ";
    }
    cout << endl;

    // Remove an element by value
    myList.remove(2);

    // Display the elements after removing
    cout << "List elements after removing 2: ";
    for (const auto &element : myList) {
        cout << element << " ";
    }
    cout << endl;

    // Check if the list is empty
    if (myList.empty()) {
        cout << "List is empty." << endl;
    } else {
        cout << "List is not empty." << endl;
    }

    // Size of the list
    cout << "List size: " << myList.size() << endl;

    // Clear the list
    myList.clear();

    // Check if the list is empty again
    if (myList.empty()) {
        cout << "List is empty now." << endl;
    }

    return 0;
}
