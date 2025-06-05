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

  
 