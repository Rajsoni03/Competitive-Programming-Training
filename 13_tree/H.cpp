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

void printLevel(Node* root){ 
	queue<Node*> q;
	q.push(root);
	int level = 1;
	while(!q.empty()){
		int s = q.size();
		cout << "[Level "<< level<< "] : " ;
		for (int i = 0; i < s; i++){
			Node* n = q.front();
			q.pop();
			cout << n->data << " ";
			if (n->left)  q.push(n->left);
			if (n->right) q.push(n->right);	
		}
		cout << endl;
		level++;
	}
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
	root->right->right->left = new Node(9);

	root->right->right->left->left = new Node(10);
	root->right->right->left->right = new Node(11);

	printLevel(root);
	return 0;
}