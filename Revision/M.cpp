#include <iostream>
#include <utility>
#include <map>
using namespace std;



int main(){
	map<int,int> m;

	m[10] = 1;
	m[20] = 3;
	m[30] = 6;


	for (pair<int,int> i : m){
		cout << i.first << endl;
		cout << i.second << endl;
	}

	// pair<int,int> p;

	// cout << p.first << endl;
	// cout << p.second << endl;

	return 0;
}