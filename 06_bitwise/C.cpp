#include <iostream>
using namespace std;

int main(){
	int num = 256; // 11111111
				   //100000000
	int n = 7;

	bool ans = num & (1 << n-1);

	cout << ans << endl;


	return 0;
}