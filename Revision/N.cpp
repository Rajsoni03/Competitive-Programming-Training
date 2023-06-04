#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> table;

	table.insert({1, 10});
	table.insert({1, 20});
	// table.insert({2, 20});
	table.insert({3, 30});

	for (int i = 1; i <= 3; i++){
		if (table.count(i)){
			cout << i << " -> " << table[i] << endl;
		}
	}

	return 0;
}

/*
1 -> 20
3 -> 30
*/