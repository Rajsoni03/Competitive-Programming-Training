#include <iostream>
#include <utility>
using namespace std;

int* func(){
	int a[2] = {10, 20};
	return a;
}

int main(){
	int a[2] = func();
	cout << a[0] << endl;
	cout << a[1] << endl;
	return 0;
}