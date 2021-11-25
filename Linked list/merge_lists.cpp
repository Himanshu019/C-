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

Node* input(){
	Node *head = NULL;
	Node *tail = NULL;
	int data = 0;
	
	cout << "Enter -1 to stop: ";
	
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
	return head;
}



int main(){
	Node *h1 = input();
	Node *h2 = input();
	Node *fh = NULL;
	Node *ft = NULL;
	
	while(h1 != NULL || h2 != NULL){
		if(fh == NULL){
			if(h1 -> data <= h2 -> data){
				fh = h1;
				ft = h1;
				h1 = h1 -> next;
			}
			else{
				fh = h2;
				ft = h2;
				h2 = h2 -> next;
			}
		}
		
		if(h1 != NULL && h2 == NULL){
			ft -> next = h1;
			break;
		}
		if(h1 == NULL && h2 != NULL){
			ft -> next = h2;
			break;
		}
		
		if(h1 -> data <= h2 ->data){
			ft -> next = h1;
			ft = h1;
			h1 = h1 -> next;
		}
		else{
			ft -> next = h2;
			ft = h2;
			h2 = h2 -> next;
		}
	}
	print(fh);
	
	getch();
	return 0;
}