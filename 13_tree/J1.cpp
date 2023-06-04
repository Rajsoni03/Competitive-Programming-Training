// Zig Zeg Traversal

#include <iostream>
#include <deque>
#include <vector>
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

void leftView(Node *root, int level, vector<int> &v){
	if (!root) return;
	if (v.size() < level){
		v.push_back(root->data);
	}
	leftView(root->left, level + 1, v);
	leftView(root->right,  level + 1, v);
}
/*
		   1           <-
        2     3        <-
      4   5  6  7      <-
        8        9     <-
     10
*/
int main(){
	Node* root  = new Node(1);

	root->left  = new Node(2);
	root->right = new Node(3);

	root->left->left  = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);	

	root->left->right->left = new Node(8);
	root->right->right->left = new Node(9);

	root->right->right->left->left = new Node(10);
	root->right->right->left->right = new Node(11);
	// int count = 0;
	vector<int> v;
	leftView(root, 1, v);

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}