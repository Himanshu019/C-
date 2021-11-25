// REVERSE A LIST USING RECURSION

#include <bits/stdc++.h>
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

Node* merge_lists(Node *h1, Node *h2){
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
	return fh;
}

Node* midpoint(Node* head){
	Node *fast = head, *slow = head;
	while(fast -> next != NULL && fast -> next -> next != NULL){
		fast = fast -> next -> next;
		slow = slow -> next;
	}
	return slow;
}

Node* merge_sort(Node *head){
	if(head == NULL || head -> next == NULL)
		return head;
	Node* mid = midpoint(head);
	Node* half2 = mid -> next;
	Node* half1 = head;
	mid -> next = NULL;
	
	half1 = merge_sort(half1);
	half2 = merge_sort(half2);
	Node *res = merge_lists(half1, half2);
	return res;
}

Node* reverse_recursive(Node *head){
	if(head == NULL || head -> next == NULL)
		return head;
	
	Node* result = reverse_recursive(head -> next);
	Node* temp = result;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	head -> next = NULL;
	temp -> next = head;
	return result;
}

int main(){
	Node *head = input();
	
	head = reverse_recursive(head);
	
	print(head);
	
	getch();
	return 0;
}