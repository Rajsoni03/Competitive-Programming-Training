// Number of leaf Node in tree


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

int leafCount(Node* root){
	if (root == nullptr)
		return 0;
	if (root->left == nullptr && root->right == nullptr)
		return 1;
	int Lcount = leafCount(root->left);
	int Rcount = leafCount(root->right);
	return Lcount + Rcount;
}

int main(){
	Node* root  = new Node(1);
	root->left  = new Node(2);
	root->right = new Node(3);

	root->right->left  = new Node(4);
	root->right->right = new Node(5);

	cout << "leafCount : " << leafCount(root);
	return 0;
}