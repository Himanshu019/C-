#include <iostream>
#include <conio.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	
	Node(int n){
		data = n;
		next = NULL;
	}
};

void print(Node *head){
	Node *temp = head;
	while(temp != NULL && temp -> data != -1){
		cout << temp->data << " ";
		temp = temp ->next;
	}
	cout << endl;
}

Node* insert(Node *head, int i, int d){
	Node *node = new Node(d);
	int count = 0;
	Node *temp = head;
	if(i == 0){
		node ->next = head;
		head = node;
		return head;
	}
	
	while(temp != NULL && count < i-1){
		temp = temp -> next;
		count++;
	}
	if(temp != NULL){
		node ->next = temp ->next;
		temp ->next = node;
	}
	return head;
}

int main(){
	Node *head = NULL;
	Node *tail = NULL;
	int data = 0;
	
	cout << "Enter -1 to stop: ";
	//  Input
	cin >> data;
	while(data != -1){
		Node *node = new Node(data);
		if(head == NULL){
			head = node;
			tail = node;
		}
		else{
			tail -> next = node;
			tail = tail -> next;
		}
		cin >> data;
	}
	
	//  Output
	print(head);
	//  Inserting at i
	int i;
	cout << "Enter position and nuumber to be inserted: ";
	cin >> i >> data;
	head = insert(head, i, data);
	
	print(head);
	getch();
	return 0;
}