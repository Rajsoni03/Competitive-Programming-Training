#include <iostream>
using namespace std;

int fib(int i){
	if (i <= 1) return 1;
	return fib(i-1) + fib(i-2);
}

int main(){
	int i = 43;
	cout << fib(i) ;

	return 0;
}