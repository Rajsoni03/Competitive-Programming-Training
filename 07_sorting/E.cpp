#include <iostream>
#include <algorithm>
using namespace std;

bool comp(const int &a, const int &b){
	return a > b;
}

int main(){
	int n = 12;
	int arr[] = {1, 9 , 3,  5, 6, 7, 8, 2, 10, 11,4, 12};

	sort(arr, arr+n, comp);

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}