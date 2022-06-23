# Kth Missing Positive Number - [Practice - LeetCode](https://leetcode.com/problems/kth-missing-positive-number/)


Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.<br>
Return the kth positive integer that is missing from this array.\


Example:1
```
Input: 
arr = [2,3,4,7,11], 
k = 5

Output: 
9

Explanation: 
The missing positive integers are [1,5,6,8,9,10,12,13,...]. 
The 5th missing positive integer is 9.
```
Example:2
```
Input: 
arr = [1,2,3,4], 
k = 2

Output: 
6

Explanation: 
The missing positive integers are [5,6,7,...]. 
The 2nd missing positive integer is 6.
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();        
        int i = 0;
        int j = 1;
        while (k){
            if (i < n && arr[i] == j)
                i++;
            else 
                k--;
            j++;
        }
        
        return j - 1;
    }
};
```
