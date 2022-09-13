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

void inorder(Node* root){
	if (root == nullptr){
		return;
	}
	inorder(root->left);
	cout << root->data << ' ';
	inorder(root->right);
}


int main(){
	Node* root  = new Node(1);
	root->left  = new Node(2);
	root->right = new Node(3);

	root->right->left  = new Node(4);
	root->right->right = new Node(5);

	cout << "Inorder : ";
	inorder(root);
	return 0;
}