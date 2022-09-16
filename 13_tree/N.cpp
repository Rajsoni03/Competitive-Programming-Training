#include <iostream>
#include <vector>
#include <unordered_map>
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

void preorderTraversal(Node *root){
	if (!root) return;
	cout << root->data << ' ';
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}


void buildtree(Node* &root, vector<int> preorder, vector<int> inorder, unordered_map<int, int> mp,
	           int p_begin, int p_end, int i_begin, int i_end){

	if (p_begin == p_end || i_begin == i_end){
		return;
	}

	int first_val = preorder[p_begin];
	root = new Node(first_val); // 0

	int i_curr = mp[first_val]; // 4
	int l_size = i_curr - i_begin; // 4 - 0 = 4
	cout << "L : "<<  p_begin + 1 << " " << p_begin + l_size << " " << i_begin << " " << i_begin + l_size - 1 << endl;
	cout << "R : "<<  i_begin + l_size + 1<< " " << p_end << " " << i_curr + 1 << " " << i_end << endl;
	// p1+1, p1+1+table[val]-i1
	// i1, table[val]

	// p1+1+table[val]-i1, p2
	// table[val]+1, i2

	buildtree(root->left, preorder, inorder, mp, p_begin + 1, p_begin +1+ i_curr - i_begin, i_begin, i_curr);
	buildtree(root->right, preorder, inorder, mp, p_begin +1+ i_curr-i_begin + p_end, p_end, i_curr + 1, i_end);
}

int main(){
	Node* root = nullptr;
	unordered_map<int, int> mp;
	vector<int> preorder = {1, 2, 4, 5, 7, 3, 6, 8};
	vector<int> inorder  = {4, 2, 7, 5, 1, 8, 6, 3};

	int n = inorder.size();
	for (int i = 0; i < n; i++){
		mp[inorder[i]] = i;
	}

	buildtree(root, preorder, inorder, mp, 0, n, 0, n);


	preorderTraversal(root);
	return 0;
}
