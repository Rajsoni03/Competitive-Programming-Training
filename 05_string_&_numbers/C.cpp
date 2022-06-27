// reverse a number

#include <iostream>
#include <string>
using namespace std;

int reverseNumber(int n){
	int rev = 0;
	// logic
	int last_digit = 0;
	while(n>0){
		last_digit = n % 10;
		rev = (rev * 10) + last_digit;
		n = n / 10;
	}
	return rev;
}

int main(){
	int n;
	cin >> n;
	cout << reverseNumber(n);
	return 0;
}