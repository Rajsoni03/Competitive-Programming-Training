# How Many Numbers Are Smaller Than the Current Number - [Practice - LeetCode](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that `j != i` and `nums[j] < nums[i]`.

<br>
Return the answer in an array.

Example:1
```
Input: 
nums = [8,1,2,2,3]

Output: 
[4,0,1,1,3]

Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
```
Example:2
```
Input: 
nums = [6,5,4,8]

Output: 
[2,1,0,3]
```

## Solution 1  

Time - O(N<sup>2</sup>)<br>
Space - O(1)

```cpp
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        
        int count;
        
        for (int i = 0; i < n; i++){
            count = 0;
            for (int j = 0; j < n; j++){
                if (nums[j] < nums[i]) count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
```

## Solution 2 

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> count_arr(101, 0);
        vector<int> ans(n, 0);
        int count;
        
        for (int i = 0; i < n; i++){
            count_arr[nums[i]]++;
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < nums[i]; j++){
                ans[i] += count_arr[j];
            }            
        }
        return ans;
    }
};
```