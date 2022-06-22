#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(5, 0);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(2);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	return 0;
}