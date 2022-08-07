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


int at_last(int index){ // O(2n)
	int len = 0;
	Node *curr = head;
	while(curr){
		len++;
		curr = curr->next;
	}
	curr = head;
	len = len-index-1;
	while(len--){
		curr = curr->next;
	}
	return curr->data;
}

int at_last_optimized(int index){ // O(n)
	Node *curr = head;
	Node *ahead = head;
	while(index--){
		ahead = ahead->next;
	}
	while(ahead->next){
		ahead = ahead->next;
		curr = curr->next;
	}
	return curr->data;
}

//       0 1 2 3 4 5 6 7 8 
// curr              ^
// ahead                 ^


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
	cout << at_last(2) << endl;
	cout << at_last_optimized(2);
	return 0;
}