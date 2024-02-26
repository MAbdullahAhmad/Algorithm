#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declare an unordered_map with string keys and int values
    unordered_map<string, int> myHashMap;

    // Insert key-value pairs into the hashmap
    myHashMap["one"] = 1;
    myHashMap["two"] = 2;
    myHashMap["three"] = 3;

    // Access elements using keys
    cout << "Value corresponding to key 'two': " << myHashMap["two"] << endl;

    // Check if a key exists
    string searchKey = "four";
    if (myHashMap.find(searchKey) != myHashMap.end()) {
        cout << "Value corresponding to key '" << searchKey << "': " << myHashMap[searchKey] << endl;
    } else {
        cout << "Key '" << searchKey << "' not found in the hashmap." << endl;
    }

    // Iterate through the hashmap
    cout << "All key-value pairs in the hashmap: ";
    for (const auto& pair : myHashMap) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Erase an element by key
    myHashMap.erase("two");

    // Display the hashmap after erasing
    cout << "Hashmap after erasing key 'two': ";
    for (const auto& pair : myHashMap) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Check if the hashmap is empty
    if (myHashMap.empty()) {
        cout << "Hashmap is empty now." << endl;
    } else {
        cout << "Hashmap is not empty." << endl;
    }

    // Size of the hashmap
    cout << "Hashmap size: " << myHashMap.size() << endl;

    return 0;
}
