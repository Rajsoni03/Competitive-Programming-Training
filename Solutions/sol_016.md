# Plus One - [Practice - LeetCode](https://leetcode.com/problems/plus-one/)


You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
<br>
Increment the large integer by one and return the resulting array of digits.

Example:1
```
Input: 
digits = [1,2,3]

Output: 
[1,2,4]

Explanation: 
The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
```
Example:2
```
Input: 
digits = [9]

Output: 
[1,0]

Explanation: 
The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
```

## Solution 1  - Linear Space

Time - O(N)<br>
Space - O(N)

```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> resultArr(n);        
        
        int carry = 0;
        int sum = 0;
        
        for (int i = 0; i < n; i++){
            sum = digits[n-i-1] + carry;
            if (i == 0) sum++;
            
            carry = sum/10;
            resultArr[n-i-1] = sum % 10;
        }
        
        if (carry)
            resultArr.insert(resultArr.begin(), 1);
        return resultArr;
    }
};
```

## Solution 2 - Constant Space 

Time - O(N) and O(1) in best case<br>
Space - O(1)

```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        int sum = 0;
        
        digits[n-1]++;
        
        do {
            sum = digits[n-1] + carry;
            carry = sum/10;
            digits[n-1] = sum % 10;
            n--;
        } while (carry && n);
        
        if (carry) digits.insert(digits.begin(), 1);
        return digits;
    }
};
```