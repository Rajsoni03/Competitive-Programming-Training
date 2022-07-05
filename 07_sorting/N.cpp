#include <iostream>
using namespace std;


void margeArray(int arr1[], int arr2[], int final[], int a1n, int a2n){

	int p1 = 0;
	int p2 = 0;
	int pf = 0;

	while(p1 < a1n && p2 < a2n){
		if (arr1[p1] <= arr2[p2]){
			final[pf] = arr1[p1];
			p1++;
		}
		else{
			final[pf] = arr2[p2];
			p2++;
		}
		pf++;
	}
	while(p1 < a1n){
		final[pf] = arr1[p1];
		p1++;
		pf++;
	}
	while(p2 < a2n){
		final[pf] = arr2[p2];
		p2++;
		pf++;
	}
}


void mergeSort(int arr[], int n){
	if (n < 2) return;
	int mid = n/2;
	int left[mid];
	int right[n - mid];
	for (int i = 0; i < mid; i++){
		left[i] = arr[i];
	}
	for (int i = mid; i < n; i++){
		right[i-mid] = arr[i];
	}
	mergeSort(left, mid);
	mergeSort(right, n-mid);
	margeArray(left, right, arr, mid, n-mid);
}


int main(){
	int n = 9;
	int arr[] = {3, 10, 2, 1, 9, 6, 5, 4, 7};

	mergeSort(arr, n);

	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}

	return 0;
}