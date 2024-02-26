#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<double> l1, l2, l3;

    l1.push_back(13.23); l1.push_back(23.21); // l1 = [13.23, 23.21]
    l2.push_back(11.21); l2.push_back(32.31); // l2 = [11.21, 32.31]
    l3.push_back(93.23); l3.push_back(39.35); // l3 = [93.23, 39.35]

    vector<vector<double>> coordinates;
    coordinates.push_back(l1);
    coordinates.push_back(l2);
    coordinates.push_back(l3);

    l1.erase(std::remove(l1.begin(), l1.end(), 3)); // rem by val
    l1.erase(l1.begin() + 3);    // rem by ind
    
    // coordinates = [l1, l2, l3]
    /*
        coordinates = [
            [13.23, 23.21],
            [11.21, 32.31],
            [93.23, 39.35]
        ];

    */

    for(const auto &loc: coordinates){
        cout << "Location: [" << loc[0] << ", " << loc[1] << "]\n";
    }

    int arr[5] = {1, 2, 9, 3, 4};

    // for(int i=0; i<5; i++)
    //     cout << arr[i] << endl;


    for(const auto &el : arr)
        cout << el << endl;


    // // Declare a vector of integers
    // vector<int> myVector;

    // // Add elements to the vector
    // myVector.push_back(1);
    // myVector.push_back(2);
    // myVector.push_back(3);

    // // Display the elements using iterator
    // cout << "Vector elements: ";
    // for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // // Add more elements
    // myVector.push_back(4);
    // myVector.push_back(5);

    // // Display the elements using range-based for loop
    // cout << "Updated vector elements: ";
    // for (const auto &element : myVector) {
    //     cout << element << " ";
    // }
    // cout << endl;

    // // Access elements using index
    // cout << "Element at index 2: " << myVector[2] << endl;

    // // Find and erase an element
    // auto elementToErase = find(myVector.begin(), myVector.end(), 3);
    // if (elementToErase != myVector.end()) {
    //     myVector.erase(elementToErase);
    // }

    // // Display the elements after erasing
    // cout << "Vector elements after erasing: ";
    // for (const auto &element : myVector) {
    //     cout << element << " ";
    // }
    // cout << endl;

    // // Size and capacity of the vector
    // cout << "Vector size: " << myVector.size() << endl;
    // cout << "Vector capacity: " << myVector.capacity() << endl;

    // // Clear the vector
    // myVector.clear();

    // // Check if the vector is empty
    // if (myVector.empty()) {
    //     cout << "Vector is empty now." << endl;
    // }


    return 0;
}
