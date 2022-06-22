#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair{
	public:
		T1 first;
		T2 second;
		Pair(T1 a=0, T2 b=0){
			first = a;
			second = b;
		}
};


int main(){
	Pair<int, int> p;
	p.first = 10;
	p.second = 20;

	cout << p.first << endl;
	cout << p.second << endl;

	Pair<long long, long long> p1;

	p1.first = 1000000000;
	p1.second = 2000000000;

	cout << p1.first << endl;
	cout << p1.second << endl;

	return 0;
}