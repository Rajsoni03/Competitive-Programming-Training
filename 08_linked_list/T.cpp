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


bool isPalindrome(){
	Node *slow = head;
	Node *fast = head;
	Node *rev  = nullptr;
	Node *temp;

	while(fast && fast->next){
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;

		// push front temp in rev list
		temp->next = rev;
		rev = temp;
	}
	// 3 2 1
	// 2 1
	if (fast){
		slow = slow->next;
	}
	// 2 1
	// 2 1
	while(slow && rev){
		if (slow->data != rev->data){
			return false;
		}
		slow = slow->next;
		rev = rev->next;
	}
	return true;
}

int main(){
	head = new Node(2, head);
	head = new Node(2, head);
	head = new Node(3, head);
	head = new Node(3, head);
	head = new Node(2, head);
	head = new Node(1, head);

	display(head);
	
	cout << isPalindrome();
	return 0;
}