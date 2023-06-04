#include <iostream>
using namespace std;


template <typename T1, typename T2>
class Pair{
public:
	T1 first;
	T2 second;

	Pair(T1 first = 0, T2 second = 0){
		this->first = first;
		this->second = second;
	}
};


int main(){
	Pair<int,int> p;


	cout << p.first << endl;
	cout << p.second << endl;

	return 0;
}