#include <iostream>
using namespace std;
// 0 -> n-1
// 1 -> n-1

int main(){
	int arr[] = {1, 3, 4, 5, 2, 6, 0, 7, 9, 10};

	int n = 10;

	int arr_sum = 0;
	int total_sum = 0;

	for (int i = 0; i < n; i++){
		arr_sum += arr[i];
	}

	for (int i = 0; i <= n; i++){
		total_sum += i;
	}

	cout << total_sum << " - " << arr_sum << endl;
	cout << total_sum - arr_sum << endl;

	return 0;
}