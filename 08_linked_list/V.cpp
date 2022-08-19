#include <iostream>
#include <set>
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
Node *list1 = nullptr;
Node *list2 = nullptr;

void display(Node *n){
	Node *curr = n;
	cout << "Head->";
	while(curr != nullptr){
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << "nullptr\n";
}

Node* merge(){
	Node* curr1 = list1;
	Node* curr2 = list2;

	Node* newList = new Node(0);
	Node* tail = newList;

	while(curr1 && curr2){
		if (curr1->data < curr2->data){
			tail->next = new Node(curr1->data);
			tail = tail->next;
			curr1 = curr1->next;
		}
		else {
			tail->next = new Node(curr2->data);
			tail = tail->next;
			curr2 = curr2->next;
		}
	}
	while(curr1){
		tail->next = new Node(curr1->data);
		tail = tail->next;
		curr1 = curr1->next;
	}
	while(curr2){
		tail->next = new Node(curr2->data);
		tail = tail->next;
		curr2 = curr2->next;
	}
	return newList->next;
}


int main(){
	list1 = new Node(12, list1);
	list1 = new Node(10, list1);
	list1 = new Node(8, list1);
	list1 = new Node(7, list1);
	list1 = new Node(5, list1);
	list1 = new Node(3, list1);
	list1 = new Node(1, list1);

	list2 = new Node(9, list2);
	list2 = new Node(7, list2);
	list2 = new Node(6, list2);
	list2 = new Node(4, list2);
	list2 = new Node(2, list2);

	display(list1);
	display(list2);

	Node * newList = merge();
	display(newList);
	// 1 2 3 4 5 6 7 7 8 9
	return 0;
}