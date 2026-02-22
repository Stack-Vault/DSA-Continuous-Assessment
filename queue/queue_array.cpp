#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
private:
    int arr[SIZE];
    int front;
    int rear;
    int count;

public:
    Queue() {
        front = -1;
        rear = -1;
        count = 0;
    }

    // ENQUEUE (add element)
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Full (Overflow)\n";
            return;
        }

        if (front == -1) front = 0;

        rear++;
        arr[rear] = value;
        count++;

        cout << value << " added to queue\n";
    }

    // DEQUEUE (remove element)
    void dequeue() {
        if (front == -1) {
            cout << "Queue Empty (Underflow)\n";
            return;
        }

        cout << arr[front] << " removed\n";

        if (front == rear) {   // only one element
            front = rear = -1;
        } else {
            front++;
        }

        count--;
    }

    // PEEK / FRONT
    void peek() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == SIZE - 1;
    }

    int size() {
        return count;
    }

    void print() {
        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.print();
    q.peek();

    q.dequeue();
    q.print();

    cout << "Size: " << q.size() << endl;
    return 0;
}