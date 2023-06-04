#include <iostream>
#include <vector>
using namespace std;

int main(){
	int size = 10;
	int val = 1000;
	vector<int> v(size, val);
	

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}

	for (int& i : v){
		cout << i << endl;
	}

	return 0;
}