#include <iostream>
using namespace std;

// int sum(int n){
// 	int addtion = 0;
// 	for (int i = 0; i <= n; i++){
// 		addtion += i;
// 	}
// 	return addtion;
// }

int sum(int n){ // 2
	if (n == 0)
		return 0;
	return n + sum(n-1);
}



int main(){

	cout << sum(10) << endl;

	return 0;
}