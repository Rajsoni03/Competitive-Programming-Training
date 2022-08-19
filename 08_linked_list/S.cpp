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

Node* RemoveCycle(){
	Node *fast = head;
	Node *slow = head;
	do{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow){
			Node *curr = head;
			while(curr->next != slow->next){
				curr = curr->next;
				slow = slow->next;
			}
			slow->next = nullptr;
			return curr;
		}
	} while(fast && fast->next);
	return nullptr;
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
	
	last->next = cPoint;

	cout << RemoveCycle()->data << endl;
	display();
	return 0;
}