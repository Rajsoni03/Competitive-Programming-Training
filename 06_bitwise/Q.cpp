#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 5;

	/*
	int temp = a;
	a = b;
	b = temp;
	*/

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << endl << b << endl;

	return 0;
}