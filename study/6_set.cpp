#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(2);

    // Display the elements using range-based for loop
    cout << "Set elements: ";
    for (const auto &element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if an element exists in the set
    int searchElement = 3;
    if (mySet.find(searchElement) != mySet.end()) {
        cout << "Element " << searchElement << " found in the set." << endl;
    } else {
        cout << "Element " << searchElement << " not found in the set." << endl;
    }

    // Erase an element from the set
    mySet.erase(2);

    // Display the elements after erasing
    cout << "Set elements after erasing 2: ";
    for (const auto &element : mySet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if the set is empty
    if (mySet.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    // Size of the set
    cout << "Set size: " << mySet.size() << endl;

    return 0;
}
