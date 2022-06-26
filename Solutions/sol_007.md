# Shuffle String - [Practice - LeetCode](https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/)

You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string. <br> <br> 

Return the shuffled string.

Example:1
```
Input: 
s = "codeleet", indices = [4,5,6,7,0,2,1,3]

Output: 
"leetcode"

Explanation: 
As shown, "codeleet" becomes "leetcode" after shuffling.
```
Example:2
```
Input: 
s = "abc", indices = [0,1,2]

Output: 
"abc"

Explanation: 
After shuffling, each character remains in its position.
```

## Solution 1 - Takes N Space 

Time - O(N)<br>
Space - O(N)

```cpp
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string ans = s;
        
        for (int i = 0; i < n; i++){
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};
```

## Solution 2 - Constant Space (Cycle Sort)

Time - O(N) Average / O(N<sup>2</sup>) at worse case  <br>
Space - O(1)

```cpp
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        int i = 0;
        
        while(i<n){
            if(indices[i] != i){
                swap(s[i], s[indices[i]]);
                swap(indices[i], indices[indices[i]]);
            }
            else i++;
        }
        return s;
    }
};

```