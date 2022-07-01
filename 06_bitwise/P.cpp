#include <iostream>
using namespace std;

int main(){
	int n = 10;
	int arr[] = {2, 2, 5, 7, 5, 1, 3, 4, 3, 1};

	int totalXOR = 0;

	for (int i = 0; i < n; i++){
		totalXOR ^= arr[i];
	}
	// cout << totalXOR;
	int mask = totalXOR & (-totalXOR);

	int onceXOR = 0;
	int zeroXOR = 0;

	for (int i = 0; i < n; i++){
		if (arr[i] & mask)
			onceXOR ^= arr[i];
		else
			zeroXOR ^= arr[i];
	}
	cout << onceXOR << endl;
	cout << zeroXOR << endl;
	return 0;
}