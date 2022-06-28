#include <iostream>
using namespace std;

int main(){
	int num = 255;
	int n = 5;

	int ans = num & ~(1 << 4);

	cout << ans << endl;

	return 0;
}