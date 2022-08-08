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
			                       H	
	       n<-1<-2<-3<-4<-5<-6<-7<-8  n
prev	                        ^
curr                               ^  
next                                  ^
*/

void reverse1(){
	// O(n) time
	// O(1) space
	if (!head || !head->next) return;

	Node *prev = nullptr;
	Node *curr = head;
	Node *next = curr->next;

	while(next){
		curr->next = prev; // reverse
		prev = curr;
		curr = next;
		next = curr->next;
	}
	curr->next = prev;
	head = curr;
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
	reverse1();
	display();
	return 0;
}