#include <iostream>
#include <vector>
using namespace std;

vector<int> getNextGreaterElement(vector<int> &A){
	int n = A.size();
	vector<int> ans(n);
	bool notFount;
	for (int i = 0; i < n-1; i++){
		notFount = true;
		for (int j = i+1; j < n; j++){
			if (A[i] < A[j]){
				ans[i] = A[j];
				notFount = false;
				break;
			}
		}
		if (notFount){
			ans[i] = -1;
		}
	}
	ans[n-1] = -1;
	return ans;
}


int main(){
	int n = 5;
	vector<int> v = {1, 5, 2, 3, 5};
	vector<int> ans = getNextGreaterElement(v);
	for (int i = 0; i < n; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}