#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> getNextGreaterElement(vector<int> &A){
	stack<int> s;
	int n = A.size();
	vector<int> ans(n);

	for (int i = n-1; i >= 0; i--){
		while(!s.empty() && s.top() <= A[i]){
			s.pop();			
		}
		if (s.empty()){
			ans[i] = -1;
		}
		else{
			ans[i] = s.top();
		}
		s.push(A[i]);
	}
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