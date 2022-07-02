#include <iostream>
using namespace std;

void SWAP(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void SORT(int arr[], int n){
	int min_value;
	int min_index;

	for (int i = 0; i < n-1; i++){  // i = 0
		min_value = arr[i];
		min_index = i;            

		for (int j = i+1; j < n; j++){
			if (arr[j] > min_value){
				min_value = arr[j];
				min_index = j;     // min_index = 4
			}
		}
		SWAP(arr[i], arr[min_index]);
	}
}


int main(){
	int n = 12;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	SORT(arr, n);

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}