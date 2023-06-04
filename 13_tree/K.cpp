// Left View of tree
// Iterative Approach 

#include <iostream>
#include <queue>
#include <map>
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

void LeftView(Node* root){ 
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		int s = q.size();
		for (int i = 0; i < s; i++){
			Node *n = q.front();
			q.pop();
			if (i==0){
				cout << n->data << " ";
			}
			if(n->left) q.push(n->left);
			if(n->right) q.push(n->right);
		}
	}	
}

void topView(Node* root) {
    // add your logic here
	map<int, int> table;	
	queue<pair<int,Node*>> q;
	q.push({0, root});
	
	while(!q.empty()){
		pair<int, Node*> curr = q.front(); // col, node
		q.pop();
		if (table.count(curr.first) == 0){
			table[curr.first] = curr.second->data;
		}
		if (curr.second->left) q.push({curr.first-1, curr.second->left});
		if (curr.second->right) q.push({curr.first+1, curr.second->right});
	}
	
	for (pair<int, int> i : table){
		cout << i.second << endl;
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
	root->left->right->right = new Node(9);
	root->right->right->left = new Node(10);

	root->left->right->right->left = new Node(11);

	topView(root);
	return 0;
}