#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int key = 5;

	int encode = a ^ key;

	cout << encode << endl;

	int decode = encode ^ key;

	cout << decode << endl;


	return 0;
}