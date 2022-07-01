#include <iostream>
#include <climits>
using namespace std;

void MySwap(auto &a, auto &b){
	a = a + b; // 15
	b = a - b; // 10
	a = a - b; // 5
}

struct C{
	int x;
};

int main(){
	C a;
	a.x = 10;
	C b;
	b.x = 5;

	MySwap(a, b);

	cout << a.x << endl << b.x << endl;

	return 0;
}