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


int mid(){  // O(1.5*n)
	int len = 0;
	Node *curr = head;

	while(curr){    // O(n)
		len++;
		curr = curr->next;
	}
	len = len/2;   // 4
	curr = head;
	while(len--){  // O(n/2)
		curr = curr->next;
	}
	return curr->data;
}

int mid_optimized(){
	Node *fast = head;
	Node *slow = head;

	while(fast != nullptr && fast->next != nullptr){
		fast = fast->next;
		fast = fast->next;
		slow = slow->next;
	}
	return slow->data;
}

//     0 1 2 3 4 5 6 7 8 9 n
// f                     ^
// s           ^

int main(){
	push_back(0);
	push_back(1);
	push_back(2);
	push_back(3);
	push_back(4);
	push_back(5);
	push_back(6);
	push_back(7);
	push_back(8);

	display();
	cout << mid() << endl;
	cout << mid_optimized();
	return 0;
}