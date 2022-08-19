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

void display(Node *n){
	Node *curr = n;
	cout << "Head->";
	while(curr != nullptr){
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << "nullptr\n";
}


bool reOrderList(){

}

int main(){
	head = new Node(1, head);
	head = new Node(2, head);
	head = new Node(3, head);
	head = new Node(3, head);
	head = new Node(2, head);
	head = new Node(1, head);

	display(head);
	cout << reOrderList();
	display(head);
	
	return 0;
}