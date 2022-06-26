// vector to array 

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++){ 
		cin >> v[i];
	}

	int arr[n];

	// copy vector to array
	for (int i = 0; i < n; i++){
		arr[i] = v[i];
	}

	return 0;
}