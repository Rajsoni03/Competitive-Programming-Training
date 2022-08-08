#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data = 0, Node *next = nullptr){
			this->data = data;
			this->next = next;
		}
};
Node *head = nullptr;

void push_front(int data){
	Node *n = new Node(data);
	n->next = head;
	head = n;
}

void display(){
	Node *curr = head;
	cout << "Head->";
	while(curr != nullptr){
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << "nullptr\n";
}

/*
	    1->2->3->4->5->6->7->8->n
curr       ^  
temp    ^
H      ->1-> n
*/

void reverse2(){
	// O(n) time
	// O(1) space
	Node *curr = head;
	head = nullptr;
	Node *temp;

	while(curr){
		temp = curr;
		curr = curr->next;
		
		temp->next = head;
		head = temp;
	}
}

int main(){
	push_front(8);
	push_front(7);
	push_front(6);
	push_front(5);
	push_front(4);
	push_front(3);
	push_front(2);
	push_front(1);

	display();
	reverse2();
	display();
	return 0;
}