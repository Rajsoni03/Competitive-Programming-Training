// Left View of tree
// Recursive Approach 

#include <iostream>
#include <queue>
#include <map>
#include <utility>
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
void topView(Node* root){
	queue<pair<Node*, int>> q; // queue<Node*> q;
	q.push({root, 0}); // q.push(root);
	map<int, int> table;// col, value
	Node* n;
	int col;
	while(!q.empty()){
		n = q.front().first;  // curr node
		col = q.front().second;
		// logic
		if (table.count(col) == 0){  // 1, 0
			table[col] = n->data;
		}

		q.pop();
		if (n->left) q.push({n->left, col-1});
		if (n->right) q.push({n->right, col+1});
	}

	vector<int> v;
	for (auto i : table){
		cout << i.first << " - " << i.second << endl;
		v.push_back(i.second);
	}
	// return v;
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