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

Node* mergeOptimized(){
	Node* curr1 = list1;
	Node* curr2 = list2;

	Node* newList = new Node(0);
	Node* tail = newList;

	Node* temp;

	while(curr1 && curr2){
		if (curr1->data < curr2->data){
			temp = curr1;
			curr1 = curr1->next;
			tail->next = temp;
			tail = tail->next;
		}
		else {
			temp = curr2;
			curr2 = curr2->next;
			tail->next = temp;
			tail = tail->next;
		}
		display(newList->next);
	}
	if(curr1){
		tail->next = curr1;
	}
	if(curr2){
		tail->next = curr2;
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

	Node * newList = mergeOptimized();
	display(newList);
	// 1 2 3 4 5 6 7 7 8 9
	return 0;
}