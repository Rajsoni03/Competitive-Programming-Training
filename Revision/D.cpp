#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5};
	v.push_back(6);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	


	return 0;
}