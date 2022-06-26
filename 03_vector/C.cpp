// size and capacity
// if vactor is full then capacity increase by (2 * size)

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v; 
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(1);
 
	cout << endl << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(2);
 
	cout << endl << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(2);
 
	cout << endl << v.size() << endl;
	cout << v.capacity() << endl;
	
	v.push_back(2);
 
	cout << endl << v.size() << endl;
	cout << v.capacity() << endl;
	
	v.push_back(2);
 
	cout << endl << v.size() << endl;
	cout << v.capacity() << endl;


	return 0;
}