#include <iostream>
using namespace std;


int main(){
	int n = 5;
	// static int arr[5];
	int arr[n] = {1, 2}; // 5, 2

	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}
	return 0;
}