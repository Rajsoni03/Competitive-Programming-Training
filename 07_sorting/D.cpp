#include <iostream>
using namespace std;

void SWAP(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

bool compMIN(int &a, int &b){
	return a<b;
}

void SORT(int *start, int *end, bool (comp)(int&, int&) = compMIN){
	int n = (end - start);

	int min_value;
	int min_index;

	for (int i = 0; i < n-1; i++){  // i = 0
		min_value = start[i];
		min_index = i;            

		for (int j = i+1; j < n; j++){
			// if (start[j] > min_value){
			if (!comp(start[j], min_value)){
				min_value = start[j];
				min_index = j;     // min_index = 4
			}
		}
		SWAP(start[i], start[min_index]);
	}
}

bool compMAX(int &a, int &b){
	return a<b;
}

int main(){
	int n = 12;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	SORT(arr, arr+6, compMAX);

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}