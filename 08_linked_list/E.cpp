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
	// head = new Node(data, head);
	Node *n = new Node(data);
	n->next = head;
	head = n;
}
// H->50->40->30->20->10->nullptr
//                    ^

void push_back(int data){
	if (head == nullptr){
		push_front(data);
	}
	else{
		Node *curr = head;
		while(curr->next != nullptr){
			curr = curr->next;
		}
		curr->next = new Node(data);
	}
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

int main(){
	push_back(70);
	push_front(10);
	push_back(20);
	push_front(40);
	push_back(30);
	push_back(50);
	push_front(60);
	// 60 40 10 70 20 30 50

	display();

	return 0;
}