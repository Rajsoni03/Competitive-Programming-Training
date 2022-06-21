# Final Value of Variable After Performing Operations - [Practice - LeetCode](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/)

There is a programming language with only four operations and one variable X:<br><br>

`++X` and `X++` increments the value of the variable X by 1.<br>
`--X` and `X--` decrements the value of the variable X by 1.<br>
Initially, the value of X is 0.<br><br>

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

Example:1
```
Input:
operations = ["--X","X++","X++"]

Output:
1

Explanation : 
The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.
```
Example:2
```
Input: 
operations = ["++X","++X","X++"]

Output: 
3

Explanation: 
The operations are performed as follows:
Initially, X = 0.
++X: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
X++: X is incremented by 1, X = 2 + 1 = 3.
```

## Solution 1 - Simple code

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;
        for (int i = 0; i < operations.size(); i++){
             if (operations[i] == "++X")
             	++val;
             else if (operations[i] == "X++") 
             	val++;
             else if (operations[i] == "--X") 
             	--val;
             else if (operations[i] == "X--") 
             	val--;
        }
        return val;
    }
};
```

## Solution 2 - Optimized Code

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;
        int n = operations.size();
        for (int i = 0; i < n; i++){
             if (operations[i] == "++X" || operations[i] == "X++") val++;
             else val--;
        }
        return val;
    }
};
```