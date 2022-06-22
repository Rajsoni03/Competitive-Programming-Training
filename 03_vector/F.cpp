#include <iostream>
#include <vector>
using namespace std;

/*
n = 6
arr = [1, 2, 3, 4, 5, 6]
*/

int main(){
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++){ // O(N)
		cin >> v[i]; // O(1)
	}

	for (int i = 0; i < n; i++){
		cout << v[i] << ' ';
	}

	return 0;
}