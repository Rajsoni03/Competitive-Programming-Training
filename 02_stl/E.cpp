#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a = 10;
	int b = 20;

	swap(a, b);
	swap(a, b);

	cout << a << " - " << b << endl;

	return 0;
}