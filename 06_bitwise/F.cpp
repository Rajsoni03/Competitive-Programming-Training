#include <iostream>
using namespace std;

int main(){
	int num = 3;

	int ans = num | (1 << 31);

	cout << ans; 

	return 0;
}