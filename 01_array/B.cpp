// reverse an array
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	int i = 0;
	while(i < n){ // 0
		cin >> arr[i];
		i++;
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