// add element to vector

#include <iostream>
#include <vector>
using namespace std;

/*
Time = O(N log N)

n = 6
arr = [1, 2, 3, 4, 5, 6]
*/



int main(){
	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++){ // O(N)
		int ele;
		cin >> ele;
		v.push_back(ele); // O(log N)
	}

	for (int i = 0; i < n; i++){
		cout << v[i] << ' ';
	}

	return 0;
}