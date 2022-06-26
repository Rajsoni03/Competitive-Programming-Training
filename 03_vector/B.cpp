// size()
// operator[]

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(10, 0); 

	cout << v.size() << endl;
	cout << v[2] << endl;

	return 0;
}