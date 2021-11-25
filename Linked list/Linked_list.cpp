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
	Node *temp = head;
	while(temp != NULL && temp -> data != -1){
		cout << temp->data << " ";
		temp = temp ->next;
	}
	getch();
	return 0;
}