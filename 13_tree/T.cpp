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
/*
			1          ->  1 + 4 = 5
		 /     \ 
		2		3      ->  1 + 3 = 4
	   / \     / \
	  4   5   6   7    ->  1 + 2 = 3
	     / \     /
	    8   9   10     ->  1 + 1 = 2
	       /  
	      11           ->  1
*/

// int height(Node* root){ // O(n)
// 	if (root == nullptr) return 0;
// 	int leftHeight = height(root->left);
// 	int rightHeight = height(root->right);
// 	return 1 + max(leftHeight, rightHeight);
// }

// int diaOfTree(Node* root){
// 	if (root == nullptr) return 0;
// 	int prev = max(diaOfTree(root->left), diaOfTree(root->right));
// 	int curr = height(root->left) + height(root->right);
// 	return max(prev, curr);
// }

int height(Node* root, int &ans){
	if (root == nullptr) return 0;
	int leftHeight = height(root->left, ans);
	int rightHeight = height(root->right, ans);
	// 
	ans = max(ans, leftHeight + rightHeight);
	//
	return 1 + max(leftHeight, rightHeight);
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

	int ans = 0;
	cout << height(root, ans) << endl;	
	cout << ans;


	return 0;
}