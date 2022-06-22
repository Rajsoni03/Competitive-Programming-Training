# Palindromic Array - [Practice - LeetCode](https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1)

Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.


Example:1
```
Example:
Input:
2
5
111 222 333 444 555
3
121 131 20

Output:
1
0

Explanation:
A[0] = 111    //which is a palindrome number.
A[1] = 222    //which is a palindrome number.
A[2] = 333    //which is a palindrome number.
A[3] = 444    //which is a palindrome number.
A[4] = 555    //which is a palindrome number.
As all numbers are palindrome so This will return 1.
```
Example:2
```
Input:
3
121 131 20

Output:
0
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int PalinArray(int a[], int n){
    	// code here
	    int num, rev;
	    
    	for (int i = 0; i < n; i++){
    	    // calculate reverse of i'th num
    	    num = a[i];
    	    rev = num%10;
    	    num /= 10;
    	    while(num){
    	        rev = (rev*10) + num%10;
    	        num /= 10;
    	    }

    	    // check if reverse and num are same or not 
    	    if (a[i] != rev) return 0;
    	}
    	return 1;
    }
};
```