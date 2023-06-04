#include <iostream>
#include <vector>
using namespace std;

int main(){
	// vector<int> v;
	// v[0] = 1;


	// int size = 10;
	// vector<int> v(size);
	// v[9] = 1;


	int size = 10;
	int val = 1000;
	vector<int> v(size, val);
	

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}

	return 0;
}