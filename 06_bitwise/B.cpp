#include <iostream>
using namespace std;

int main(){
	int nums = 7;  // 1010 // 1001 // 0111
	int mask = 8;  // 1000
	//             & = 1000


	bool ans = nums & mask;
	cout << ans << endl;

	return 0;
}