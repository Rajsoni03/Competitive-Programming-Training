# Convert Binary Number in a Linked List to Integer - [Practice - LeetCode](https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer)

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

<br>
Return the decimal value of the number in the linked list.
<br>
The most significant bit is at the head of the linked list.

Example:1
```
Input: 
head = [1,0,1]

Output: 
5

Explanation: 
(101) in base 2 = (5) in base 10
```
Example:2
```
Input: 
head = [0]

Output: 
0
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int val = 0;
        ListNode* curr = head;
        while(curr){
            val = (val << 1) | curr->val;
            curr = curr->next;
        }
        return val;
    }
};
```