#include <iostream>
using namespace std;

// Node of linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Stack class
class Stack {
private:
    Node* top;   // pointer to top node

public:
    Stack() {
        top = NULL;   // stack empty
    }

    // PUSH
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed\n";
    }

    // POP
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << top->data << " popped\n";
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // PEEK
    void peek() {
        if (top == NULL) {
            cout << "Stack Empty\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }

    // ISEMPTY
    bool isEmpty() {
        return top == NULL;
    }

    // PRINT STACK
    void print() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// MAIN
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.print();
    s.peek();

    s.pop();
    s.print();

    return 0;
}