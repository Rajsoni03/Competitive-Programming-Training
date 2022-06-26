# Number of Good Pairs - [Practice - LeetCode](https://leetcode.com/problems/number-of-good-pairs/)

Given an array of integers nums, return the number of good pairs.<br>

A pair (i, j) is called good if nums[i] == nums[j] and i < j.


Example:1
```
Input: 
nums = [1,2,3,1,1,3]

Output: 
4

Explanation: 
There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
```
Example:2
```
Input: 
nums = [1,2,3]

Output: 
0
```

## Solution 1  

Time - O(N<sup>2</sup>)<br>
Space - O(1)

```cpp
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (nums[i] == nums[j]) count++;                
            }
        }
        return count;
    }
};

```

## Solution 2 

Time - O(N)<br>
Space - O(1)

```cpp

class Solution {
public:    
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int arr[101] = {};
        int count = 0;
               
        for (int i : nums)
            arr[i]++;
        for (int i : arr){
            if (i > 1){
                count += i * (i-1) / 2;
            }
        }
        return count;
    }
    
};

```