# Reverse String - [Practice - Leetcode](https://leetcode.com/problems/reverse-string/)

Given an array A of size N, print the reverse of it.

Example:1
```
Input: 
s = ["h","e","l","l","o"]

Output: 
["o","l","l","e","h"]
```
Example:2
```
Input: 
s = ["H","a","n","n","a","h"]

Output:
["h","a","n","n","a","H"]
```

## Solution

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size()/2; i++){
            swap(s[i], s[s.size()-i-1]);
        }
    }
};
```
