// STL
// max and max_element function


#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout << max(10, 20) << endl;
	cout << *max_element(arr, arr+n) << endl;
	cout << max_element(arr, arr+n) - arr << endl;
	return 0;
}