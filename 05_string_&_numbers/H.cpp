#include <iostream>
#include <vector>
using namespace std;

int fib(int n){
	int prev1 = 1;
	int prev2 = 1;
	int curr = 0;

	while (n-->1){
		curr = prev1 + prev2;
		prev2 = prev1;
		prev1 = curr;
	}
	return curr;
}

int main(){
	int n = 1000;
	cout << fib(n);

	return 0;
}