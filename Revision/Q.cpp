#include <iostream>
#include <vector>
using namespace std;

int myhash(int key){
	int index;
	index = key % 100;
	return index;
}

int main(){
	vector<int> v(100, 0);

	int key, value;

	key = 18;
	value = 1083902;
	v[myhash(key)] = value;

	key = 32342;
	value = 324;
	v[myhash(key)] = value;

	key = 589439;
	value = 4839890;
	v[myhash(key)] = value;

	key = 1;
	cout << v[myhash(key)] << endl;
	key = 18;
	cout << v[myhash(key)] << endl;
	key = 32342;
	cout << v[myhash(key)] << endl;
	key = 589439;
	cout << v[myhash(key)] << endl;

	// unordered_map access/insert = O(1)


	return 0;
}
