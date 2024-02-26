#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Declare an unordered_set of integers
    unordered_set<int> myUnorderedSet;

    // Insert elements into the unordered_set
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(1);
    myUnorderedSet.insert(4);
    myUnorderedSet.insert(2);

    // Display the elements using range-based for loop
    cout << "Unordered_set elements: ";
    for (const auto &element : myUnorderedSet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if an element exists in the unordered_set
    int searchElement = 3;
    if (myUnorderedSet.find(searchElement) != myUnorderedSet.end()) {
        cout << "Element " << searchElement << " found in the unordered_set." << endl;
    } else {
        cout << "Element " << searchElement << " not found in the unordered_set." << endl;
    }

    // Erase an element from the unordered_set
    myUnorderedSet.erase(2);

    // Display the elements after erasing
    cout << "Unordered_set elements after erasing 2: ";
    for (const auto &element : myUnorderedSet) {
        cout << element << " ";
    }
    cout << endl;

    // Check if the unordered_set is empty
    if (myUnorderedSet.empty()) {
        cout << "Unordered_set is empty." << endl;
    } else {
        cout << "Unordered_set is not empty." << endl;
    }

    // Size of the unordered_set
    cout << "Unordered_set size: " << myUnorderedSet.size() << endl;

    return 0;
}
