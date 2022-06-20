// Reverse an Array 
// https://practice.geeksforgeeks.org/problems/reverse-an-array/0#

/*
Given an array A of size N, print the reverse of it.

Example:
Input:
1
4
1 2 3 4

Output:
4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    for (int i = 0; i < n; i++){
	        cout <<  arr[n-i-1] << ' ';
	    }
	    cout << endl;
	}
	
	return 0;
}