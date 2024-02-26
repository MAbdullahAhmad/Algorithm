#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Declare a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Display the top element
    cout << "Top element: " << myStack.top() << endl;

    // Pop the top element
    myStack.pop();

    // Display the top element after popping
    cout << "Top element after pop: " << myStack.top() << endl;

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Size of the stack
    cout << "Stack size: " << myStack.size() << endl;

    // Push more elements onto the stack
    myStack.push(4);
    myStack.push(5);

    // Display all elements using a loop
    cout << "Elements in the stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    // Check if the stack is empty again
    if (myStack.empty()) {
        cout << "Stack is empty now." << endl;
    }

    return 0;
}
