#include <iostream>
#include <climits>
using namespace std;

int main(){
	int num = INT_MAX;

	num = num + 2;
	for (int i = 31; i >= 0; i--){
		bool bit = num & (1<<i);
		cout << bit;
	}

	cout << endl << num;

	return 0;
}