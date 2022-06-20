// reverse an array
// O(n) time
// O(n) space

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int reverse[n];

	// your logic
	for (int i = 0; i < n; i++){
		reverse[n-1-i] = arr[i];
	}

	for (int i = 0; i < n; i++){
		cout << reverse[i] << ' ';
	}

	return 0;
}