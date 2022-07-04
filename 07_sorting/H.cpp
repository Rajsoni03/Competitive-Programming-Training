#include <iostream>
using namespace std;

void printArr(int arr[], int n, int i = 0){
	cout << "After Iteration : " << i+1 << endl;
	for (int i = 0; i < n; i++){
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
}

void swap(int &a, int &b){
	a = a + b;
	b = a - b;
	a = a - b;
}


void bubbleSort(int arr[], int n){
	for (int i = 0; i < n-1; i++){
		bool flag = true;
		for (int j = 0; j < n-1; j++){
			if (arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				flag = false;
			}
		}
		printArr(arr, n, i);
		if (flag) {
			cout << "Loop Break" << endl;
			break;
		}
	}
}


int main(){
	int n = 5;
	int arr[] = {1, 3, 2, 4, 5};

	bubbleSort(arr, n);
	// printArr(arr, n);
	return 0;
}