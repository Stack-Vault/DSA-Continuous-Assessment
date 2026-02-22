#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    // constructor
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped\n";
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack Empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack Empty\n";
            return;
        }
        cout << "Stack: ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 0.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
        }
    } while(choice != 0);

    return 0;
}
