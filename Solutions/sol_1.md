# Reverse an Array - [Practice - GFG](https://practice.geeksforgeeks.org/problems/reverse-an-array/0#)

Given an array A of size N, print the reverse of it.

Example:1
```
Input:
1
4
1 2 3 4

Output:
4 3 2 1
```
Example:2
```
Input:
2
3
1 2 3 
4
8 2 0 3

Output:
3 2 1 
3 0 2 1
```

## Solution

Time - O(N)<br>
Space - O(1)

```cpp
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
```
