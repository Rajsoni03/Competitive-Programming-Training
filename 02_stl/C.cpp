// STL 
// stl-array sort()


#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;

	// int arr[n];
	array<int, 10> arr;

	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << arr.size() << endl;
	cout << arr.empty() << endl;
	cout << arr.front() << endl;
	cout << arr.back() << endl;

	return 0;
}