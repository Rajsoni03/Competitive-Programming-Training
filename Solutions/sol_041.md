# Middle of the Linked List - [Practice - LeetCode](https://leetcode.com/problems/middle-of-the-linked-list)


Given the head of a singly linked list, return the middle node of the linked list.
<br>
If there are two middle nodes, return the second middle node.


Example:1
```
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
```
Example:2
```
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* curr = head;
        while(curr){
            curr = curr->next;
            len++;
        }
        
        len = len/2;
        curr = head;
        while(len--){
            curr = curr->next;
        }
        return curr;
    }
};
```

## Solution 2 

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
```