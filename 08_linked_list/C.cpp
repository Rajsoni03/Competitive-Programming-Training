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
	while(curr != nullptr){
		cout << curr->data << endl;
		curr = curr->next;
	}
}

int size(){
	int len = 0;
	Node *curr = head;
	while(curr != nullptr){
		curr = curr->next;
		len++;
	}
	return len;

}

int last(){
	Node *curr = head;
	while(curr->next != nullptr){
		curr = curr->next;
	}
	return curr->data;
}


int main(){
	push_front(10);
	push_front(20);
	push_front(30);
	push_front(40);
	push_front(50);

	display();
	cout << size(); // 5
	cout << last(); // 10

	return 0;
}