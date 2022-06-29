#include <iostream>
using namespace std;
// 0 -> n-1
// 1 -> n-1

int main(){
	int n = 10;
	int arr[] = {1, 2, 6, 0, 3, 4, 5, 7, 9, 10};

	int ans = 0;

	for (int i = 1; i <= n; i++){
		ans = ans ^ (arr[i-1] ^ i);
		// cout << ans << endl;
	}

	cout << ans << endl;

	return 0;
}