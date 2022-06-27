#include <iostream>
#include <vector>
using namespace std;

int fib(int i, vector<int> &dp){
	if (i <= 1) return 1;
	if (dp[i] != -1) return dp[i];
	return dp[i] = fib(i-1, dp) + fib(i-2, dp);
}

int main(){
	int i = 91;
	vector<int> dp(i+1, -1);
	cout << fib(i, dp);

	return 0;
}