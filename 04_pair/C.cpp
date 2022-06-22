#include <iostream>
using namespace std;

class Pair{
	public:
		int first;
		int second;
		Pair(int a=0, int b=0){
			first = a;
			second = b;
		}
};


int main(){
	Pair p;
	p.first = 10;
	p.second = 20;

	cout << p.first << endl;
	cout << p.second << endl;



	return 0;
}