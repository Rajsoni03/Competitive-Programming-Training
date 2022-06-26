#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t;

	int n;
	int l = 0;
	int r = 0;
	int count = 0;
	int val;
	bool flag = true;
	while(t--){
		cin >> n;
		l = 0;
		r = 0;
		count = 0;
		flag = 1;
		while(n--){
			cin >> val;
			if (val != 0 && flag){
				flag = 0;
				count++;
				// cout << " - " << val << endl;
			}
			else if (val == 0) flag = 1;
		}
		cout << count << endl;

	}
	return 0;
}