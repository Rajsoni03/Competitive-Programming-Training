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
Node *head = nullptr;

void display(){
	Node *curr = head;
	cout << "Head->";
	while(curr != nullptr){
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << "nullptr\n";
}



bool isCycle(){
	// time  O(n)
	// space O(n)	
	Node *curr = head;
	set<Node*> s;
	while(curr){
		if(s.count(curr) == 1){
			return true;
		}
		s.insert(curr);
		curr = curr->next;
	}
	return false;
}



int main(){
	Node *last = new Node(6, head);
	head = last;
	head = new Node(5, head);
	head = new Node(4, head);

	Node *cPoint = new Node(3, head);
	head = cPoint;
	head = new Node(2, head);
	head = new Node(1, head);
	
	// last->next = cPoint;

	cout << isCycle() << endl;
	display();
	return 0;
}