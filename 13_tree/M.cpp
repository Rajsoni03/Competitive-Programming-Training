#include <iostream>
#include <vector>
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

void buildTree(Node* &root, vector<int> v, int n){
	if (n==0) return;
	queue<Node*> q; //[2,3]

	root = new Node(v[0]); //[1 2 3]
	q.push(root);          //        ^3

	int i = 1;
	while(!q.empty() && i < n){
		Node *node = q.front(); // 1
		q.pop();

		if (i < n && v[i]!=-1){
			node->left = new Node(v[i]); 
			q.push(node->left);
		}
		i++;
		if (i < n && v[i]!=-1){
			node->right = new Node(v[i]); 
			q.push(node->right);
		}
		i++;
	}
}


void preorder(Node *root){
	if (!root) return;
	cout << root->data << ' ';
	preorder(root->left);
	preorder(root->right);
}

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		Node* root = nullptr;
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		buildTree(root, v, n);
		preorder(root);
		cout << endl;
	}
	return 0;
}
