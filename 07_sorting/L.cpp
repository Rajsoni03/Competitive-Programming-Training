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



int main(){
	int arr1[] = {3, 5, 8, 10, 12};
	int arr2[] = {1, 2, 3,  5,  6};

	int final[10];
	
	margeArray(arr1, arr2, final, 5, 5);

	for (int i = 0; i < 10; i++){
		cout << final[i] << ' ';
	}



	return 0;
}