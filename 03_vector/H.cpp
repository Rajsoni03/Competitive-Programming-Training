// array to vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++){ 
		cin >> arr[i];
	}

	// copy  array to vector
	vector<int> v(arr, arr+n); // range constructor

	// copy linklist to vector
	// vector<int> v(ll.begin(), ll.end()); 

	for (int i = 0; i < n; i++){ 
		cout << v[i] << ' ';
	}

	return 0;
}