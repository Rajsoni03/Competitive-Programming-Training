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

void pop_front(){
	Node *toDel = head;
	head = head->next;
	delete toDel;
}

int search(int data){
	Node *curr = head;
	int index = 0;
	while(curr){
		if (data == curr->data){
			return index;
		}
		curr = curr->next;
		index++;
	}
	return -1;
}

int at(int index){
	Node *curr = head;
	while(index--){
		curr = curr->next;
	}
	return curr->data;
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

// void push_back(int arr[], int n){
// 	Node *curr = head;
// 	for (int i = 0; i < n; i++){
// 		Node *n = new Node(arr[i]);
// 		curr->next = n;
// 		curr = curr->next;
// 	}
// }
void push_back(int arr[], int n){
	Node *curr = head;
	for (int i = 0; i < n; i++){
		curr = curr->next = new Node(arr[i]);
	}
}

// Head->0->nullptr

int main(){
	push_back(0);
	// push_back(2);
	// push_back(3);
	// push_back(4);
	// push_back(5);
	// push_back(6);
	// push_back(7);
	// push_back(8);

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	push_back(arr, 8);

	display();
	return 0;
}