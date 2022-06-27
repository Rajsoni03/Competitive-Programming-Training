// reverse a number as string

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reverseString(string &s){
	int n = s.size();

	for (int i = 0; i < n/2; i++){
		swap(s[i], s[n-i-1]);
	}
}


int main(){
	string s;
	cin >> s;

	int n = s.size();
	reverseString(s);

	for (int i = 0; i < n; i++){
		cout << s[i];
	}
	
	return 0;
}