#include <iostream>
#include <deque>
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

void ZigZegTraversal(Node* root){ 
	deque<Node*> dq;
	dq.push_back(root);
	int level = 1;
	while(!dq.empty()){
		int s = dq.size();
		cout << s<<" [Level "<< level << "] : ";
		for (int i = 0; i < s; i++){
			if (level % 2){ // odd
				Node* n = dq.front();
				dq.pop_front();
				cout << n->data << ' ';
				if (n->left) dq.push_back(n->left);
				if (n->right) dq.push_back(n->right);
			}
			else { // even
				Node* n = dq.back();
				dq.pop_back();
				cout << n->data << ' ';
				if (n->right) dq.push_front(n->right);
				if (n->left) dq.push_front(n->left);
			}
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

	ZigZegTraversal(root);
	return 0;
}