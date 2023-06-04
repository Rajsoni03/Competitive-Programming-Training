#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
	unordered_map<int, int> table;

	table[1] = 10;
	table[1] = 20;
	table[2] = 20;
	table[3] = 30;

	for (pair<int, int> p : table){
		cout << p.first << " -> " << p.second << endl;
	}	

	cout << table[1] << endl;

	return 0;
}
