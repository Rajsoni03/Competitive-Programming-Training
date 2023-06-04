// Preorder Traversal 
// Iterative Approach 

#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int data, Node* left = nullptr, Node* right = nullptr){
		this->data = data;
		this->left = left;
		this->right = right;
	}
};

void preorder(Node* root){
	if (root == nullptr){
		return;
	}
	cout << root->data << ' ';
	preorder(root->left);	
	preorder(root->right);
}

/*
	 1
  2     3
 4 5   6 7

*/

int main(){
	Node* root  = new Node(1);
	root->left  = new Node(2);
	root->right = new Node(3);

	root->left->left  = new Node(4);
	root->left->right  = new Node(5);
	root->right->left  = new Node(6);
	root->right->right = new Node(7);

	cout << "Preorder : ";
	preorder(root);
	return 0;
}