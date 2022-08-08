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

void reverse(){
	// O(n) time
	// O(n) space
	Node *curr = head;
	Node *revHead = nullptr;

	while(curr){
		Node *n = new Node(curr->data);
		n->next = revHead;
		revHead = n;
		curr = curr->next;
	}

	head = revHead;
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
	reverse();
	display();
	return 0;
}