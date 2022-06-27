#include <iostream>
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

	string rev = s;
	reverseString(rev);

	if (s == rev) cout << "Palindrome" << endl;
	else cout << "Not a Palindrome" << endl;

	return 0;
}