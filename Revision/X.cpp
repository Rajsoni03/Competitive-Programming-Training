#include <iostream>
using namespace std;


// 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
// n = 10
// n, n-1, n-2, n-3, ....... 2, 1




void func(int n){
	if (n==0) return;  // > 0
	cout << n << endl; // n
	func(n-1); 		   // n-1
}

int main(){
	func(10);
	return 0;
}