#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
 
//  printing the linked list
void print_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " "<<endl;
        temp = temp->next;
    }
}

 // counting elements of linked list
  int count_nodes(Node* head){
	int count = 0 ;
	Node* ptr = head;
	
	while(ptr != NULL){
		count++;
		ptr = ptr->next;
	}
    return count;
}
/*

counting nodes using recursive funciton
int count_nodes_recursive(Node* head){
	int count;
	if(head == NULL){
		count =0;
		return count;
	}else{
		count = 1;
		return count + count_nodes_recursive(head->next);
	}
}
*/

void insert_node_beginning(Node*& head, int value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}
void insert_node_end(Node*& head, int value){
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;
	
	if (head == NULL){
		head = newNode;
		return; // used to end programm running 
	}
	
	//traverse throuht the list
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
		
	temp->next = newNode;
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
    
    insert_node_beginning(head, 5);
    insert_node_end(head, 40);
    print_list(head);
    int total = count_nodes(head);
    cout << "The count is "<< total << endl;
}
