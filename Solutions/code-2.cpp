// Reverse String
// https://leetcode.com/problems/reverse-string/

/*
Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size()/2; i++){
            swap(s[i], s[s.size()-i-1]);
        }
    }
};