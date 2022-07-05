#include <iostream>
using namespace std;

int main(){
	int arr1[] = {3, 5, 8, 10, 12};
	int arr2[] = {1, 2, 3,  5,  6};

	int final[10];

	int p1 = 0;
	int p2 = 0;
	int pf = 0;

	while(p1 < 5 && p2 < 5){
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
	while(p1 < 5){
		final[pf] = arr1[p1];
		p1++;
		pf++;
	}
	while(p2 < 5){
		final[pf] = arr2[p2];
		p2++;
		pf++;
	}

	for (int i = 0; i < 10; i++){
		cout << final[i] << ' ';
	}



	return 0;
}