#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4};

	v.insert(v.begin() + 1, 0);

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}

	cout << v.size() << " - " << v.capacity() << endl;
	return 0;
}