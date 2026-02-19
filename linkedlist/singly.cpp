#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void print_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node n1, n2, n3;

    n1.data = 10;
    n1.next = &n2;
    n2.data = 20;
    n2.next = &n3;
    n3.data = 30;   
    n3.next = NULL;

    head = &n1;

    print_list(head);
}
