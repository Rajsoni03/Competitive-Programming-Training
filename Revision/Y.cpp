#include <iostream>
using namespace std;


// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
// n = 10
// 1, 2, 3 ......... n-2, n-1, n

void func(int i, int n){
	if (i>n) return; 
	cout << i << endl; 
	func(i+1, n);
}

int main(){
	func(1, 20);
	return 0;
}