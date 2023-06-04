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

	key = 0;
	value = 100;
	v[myhash(key)] = value;

	key = 100;
	value = 324;
	v[myhash(key)] = value;

	key = 1000;
	value = 281;
	v[myhash(key)] = value;


	key = 18;
	cout << v[myhash(key)] << endl;
	key = 120;
	cout << v[myhash(key)] << endl;
	key = 1018;
	cout << v[myhash(key)] << endl;

	return 0;
}
