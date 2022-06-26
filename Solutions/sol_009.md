# Value equal to index value - [Practice - GFG](https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1)

Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value (Consider 1-based indexing).


Example:1
```
Input: 
N = 5
Arr[] = {15, 2, 45, 12, 7}

Output: 
2

Explanation: 
Only Arr[2] = 2 exists here.
```
Example:2
```
Input: 
N = 1
Arr[] = {1}

Output: 
1

Explanation: 
Here Arr[1] = 1 exists.
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution{
public:
	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> vec;
	    for (int i = 0; i < n; i++){
	        if (i+1 == arr[i]) vec.push_back(arr[i]);
	    }
	    return vec;
	}
};
```