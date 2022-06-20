// reverse an array
// O(n/2) -> O(n) time
// O(1) space

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	// your logic
	for (int i = 0; i < n/2; i++){
		// a = arr[i]
		// b = arr[n-1-i]
		int temp   = arr[i];
		arr[i]     = arr[n-1-i];
		arr[n-1-i] = temp;
	}

	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}

	return 0;
}