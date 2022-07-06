#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
	int pivot = arr[end];
	int j = start;
	for (int i = 0; i < end; i++){
		if (arr[i] <= pivot){
			swap(arr[i], arr[j]);
			j++;
		}
	}
	swap(arr[end], arr[j]);
	return j;
}

int main(){
	int n = 8;
	int arr[] = {1, 3, 2, 6, 5, 7, 9, 4};

	partition(arr, 0, 7);

	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}

	return 0;
}