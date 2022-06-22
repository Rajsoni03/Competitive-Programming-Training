#include <iostream>
#include <vector>
using namespace std;

int main(){
	// vector<int> v; // default constructor
	// vector<int> v(10); //  fill constructor
	vector<int> v(10, 0); //  fill constructor

	cout << v.size() << endl;
	cout << v[2] << endl;

	return 0;
}