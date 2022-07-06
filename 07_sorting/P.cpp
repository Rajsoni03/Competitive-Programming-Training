#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
	int pivot = arr[end];
	int j = start;
	for (int i = start; i < end; i++){
		if (arr[i] <= pivot){
			swap(arr[i], arr[j]);
			j++;
		}
	}
	swap(arr[end], arr[j]);
	return j;
}

void quickSort(int arr[], int start, int end){
	if (start >= end) return;               // base condition
	int pivot = partition(arr, start, end); // 3
	quickSort(arr, start, pivot-1);         // left arr
	quickSort(arr, pivot+1, end);           // right arr
}


int main(){
	int n = 8;
	int arr[] = {1, 3, 2, 6, 5, 7, 9, 4};

	quickSort(arr, 0, 7);

	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}

	return 0;
}