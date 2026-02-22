#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Queue class using linked list
class Queue {
private:
    Node* front; // first element
    Node* rear;  // last element
    int count;   // size

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        count = 0;
    }

    // ENQUEUE: add to rear
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (rear == nullptr) { // empty queue
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        count++;
        cout << value << " added to queue\n";
    }

    // DEQUEUE: remove from front
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue Empty (Underflow)\n";
            return;
        }

        Node* temp = front;
        cout << temp->data << " removed from queue\n";
        front = front->next;

        // If queue becomes empty
        if (front == nullptr) rear = nullptr;

        delete temp;
        count--;
    }

    // PEEK / FRONT
    void peek() {
        if (front == nullptr) {
            cout << "Queue Empty\n";
            return;
        }
        cout << "Front element: " << front->data << endl;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    int size() {
        return count;
    }

    // Print all elements
    void print() {
        if (front == nullptr) {
            cout << "Queue Empty\n";
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// MAIN
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.print();
    q.peek();

    q.dequeue();
    q.print();

    cout << "Queue size: " << q.size() << endl;

    return 0;
}