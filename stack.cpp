#include <iostream>
using namespace std;


// Node class representing a single node in the linked list
class node {
public:
    int data;
    node *next;

   node() { // Ganti "Node" menjadi "node"
        next = NULL;
    }
};

// Stack class
class Stack {
private:
    node *top; // Pointer to the top node of the stack

public:
    Stack() {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    int push(int value) {
        node *newNode = new node(); // Perbaiki "Node" menjadi "node"
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    
     cout << "Pushed value: " << value << endl;
        return value;
    }

    // IsEmpty operation: Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Pop operation: Remove the topmost element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped value: " << top->data << endl;
        node *temp = top;
        top = top->next;
        delete temp;
    }

    // Peek operation: Retrieve all elements from the top to bottom
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            node *current = top;
  
