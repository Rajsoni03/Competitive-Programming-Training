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

int main(){
	push_front(10);

	cout << head->data;
	cout << head->next;


	return 0;
}