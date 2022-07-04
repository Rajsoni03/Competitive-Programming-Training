#include <iostream>
using namespace std;

void printArr(int arr[], int n, int i = 0){
	cout << "After Iteration : " << i << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
}

void insertionSort(int arr[], int n){
	int val, j;
	for (int i = 1; i < n; i++){
		printArr(arr, n, i); // Ignore this line
		val = arr[i];
		j = i;
		while(j>0 && arr[j-1] > val){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = val;
	}
}

int main(){
	int n = 5;
	// int arr[] = {5, 4, 3, 2, 1};
	int arr[] = {1, 5, 4, 3, 2};

	insertionSort(arr, n);
	printArr(arr, n, 5);
	return 0;
}