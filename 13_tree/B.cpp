// Preorder Traversal 
// Recursive Approach 

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


int main(){
	Node* root  = new Node(1);
	root->left  = new Node(2);
	root->right = new Node(3);

	root->right->left  = new Node(4);
	root->right->right = new Node(5);

	cout << "Preorder : ";
	preorder(root);
	return 0;
}