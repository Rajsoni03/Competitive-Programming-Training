#include <iostream>
using namespace std;

// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// n = 10
// 1, 2, 3 ......... n-2, n-1, n

void func(int n){
	if (n==0) return; // > 0
	func(n-1); // n-1
	cout << n << endl; // n
}

int main(){
	func(10);
	return 0;
}