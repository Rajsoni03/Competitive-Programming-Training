#include <iostream>
#include <climits>
using namespace std;

void MySwap(auto &a, auto &b){
	//  a = 1010
	//  b = 0101

	a = a ^ b; // 1111
	b = a ^ b; // 1111 ^ 0101 = 1010
	a = a ^ b; // 1111 ^ 1010 = 0101
}

int main(){
	int a = 10;
	int b = 5;

	MySwap(a, b);

	cout << a << endl << b << endl;

	return 0;
}