#include <iostream>
#include <climits>
using namespace std;

void MySwap(auto &a, auto &b){
	auto temp = a;
	a = b;
	b = temp;
}

class Stu{
	public:	
		int x;
		int y;
	Stu(int x, ):x(x), y(y){};
};

int main(){
	Stu a(10);
	Stu b(5);

	MySwap(a, b);

	cout << a.x << endl << b.x << endl;

	return 0;
}