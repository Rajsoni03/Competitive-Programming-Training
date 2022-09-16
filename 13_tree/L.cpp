#include <iostream>
#include <queue>
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

void LeftView(Node* root, int level, vector<int> &v){ 
	if (root==nullptr)
		return;
	if(level > v.size()){
		v.push_back(root->data);
	}
	LeftView(root->left, level+1, v);
	LeftView(root->right, level+1, v);
}

int main(){
	Node* root  = new Node(1);

	root->left  = new Node(2);
	root->right = new Node(3);

	root->left->left  = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);	

	root->left->right->left = new Node(8);
	root->left->right->right = new Node(9);
	root->right->right->left = new Node(10);

	root->left->right->right->left = new Node(11);


	vector<int> v;
	
	LeftView(root, 1, v);

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
	return 0;
}