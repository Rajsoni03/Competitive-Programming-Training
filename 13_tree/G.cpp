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

void levelOrderTraversal(Node* root){ 
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node* n = q.front();
		q.pop();
		cout << n->data << " ";
		if (n->left)  q.push(n->left);
		if (n->right) q.push(n->right);
	}
}

int main(){
	Node* root  = new Node(1);
	root->left  = new Node(2);
	root->right = new Node(3);

	root->right->left  = new Node(4);
	root->right->right = new Node(5);

	levelOrderTraversal(root);
	return 0;
}