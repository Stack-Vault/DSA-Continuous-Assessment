#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

// ---------------------------------------------
// Print the linked list
// ---------------------------------------------
void print_list(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// ---------------------------------------------
// Count nodes (Iterative)
// ---------------------------------------------
int count_nodes(Node* head) {
    int count = 0;
    Node* ptr = head;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    return count;
}

/*
// ---------------------------------------------
// Count nodes (Recursive)
// ---------------------------------------------
int count_nodes_recursive(Node* head) {
    if (head == NULL) {
        return 0;
    }
    return 1 + count_nodes_recursive(head->next);
}
*/

// ---------------------------------------------
// Insert node at beginning
// ---------------------------------------------
void insert_node_beginning(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// ---------------------------------------------
// Insert node at end
// ---------------------------------------------
void insert_node_end(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// ---------------------------------------------
// Main Function
// ---------------------------------------------
int main() {
    Node* head = NULL;

    Node n1, n2, n3;

    n1.data = 10;
    n1.next = &n2;

    n2.data = 20;
    n2.next = &n3;

    n3.data = 30;
    n3.next = NULL;

    head = &n1;

    // Insert operations
    insert_node_beginning(head, 5);
    insert_node_end(head, 40);

    // Print list
    print_list(head);

    // Count nodes
    int total = count_nodes(head);
    cout << "The count is " << total << endl;

    return 0;
}
