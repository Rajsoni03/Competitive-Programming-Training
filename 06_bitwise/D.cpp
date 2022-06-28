#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;

	int mask;
	int bits = 31;
	bool ans;

	while(bits){
		mask = 1 << (bits - 1);
		ans = num & mask;
		if (ans){
			break;
		}
		bits--;
	}
	cout << bits << endl;
	return 0;
}