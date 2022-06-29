#include <iostream>
using namespace std;

int main(){
	int n = 5; // 000000000000000000010110

	bool flag = false;

	int i = 32;
	int max_dis = 0;
	int start = 0;

	while(i--){
		int mask = 1 << i;
		if (n & mask){
			flag = true;
		}
		if (flag == true && (n & mask)){ // main logic
			if (start != 0 && max_dis < start - i){
				max_dis = start - i;
			}
			start = i;
			// cout << i << " - " << start << " - " << max_dis << endl;
		}
	}

	cout << max_dis << endl;

	return 0;
}