// reverse a number as string

#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;

	int n = s.size();

	for (int i = 0; i < n; i++){
		cout << s[n-i-1];
	}
	
	return 0;
}