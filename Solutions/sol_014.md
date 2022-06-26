# Count Items Matching a Rule - [Practice - LeetCode](https://leetcode.com/problems/count-items-matching-a-rule/)

You are given an array `items`, where each `items[i] = [typei, colori, namei]` describes the type, color, and name of the i<sup>th<sup> item. You are also given a rule represented by two strings, `ruleKey` and `ruleValue`.


Example:1
```
Input: 
items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], 
ruleKey = "color", 
ruleValue = "silver"

Output: 
1

Explanation: 
There is only one item matching the given rule, which is ["computer","silver","lenovo"].
```
Example:2
```
Input: 
items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]], 
ruleKey = "type", 
ruleValue = "phone"

Output: 
2

Explanation: 
There are only two items matching the given rule, which are ["phone","blue","pixel"] and ["phone","gold","iphone"]. 
Note that the item ["computer","silver","phone"] does not match.
```

## Solution 1  

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size();
        int count = 0;
        
        for (int i = 0; i < n; i++){
            if (ruleKey=="type" && items[i][0] == ruleValue) count++;            
            else if (ruleKey=="color" && items[i][1] == ruleValue) count++;
            else if (ruleKey=="name" && items[i][2] == ruleValue) count++;
        }
        return count;
    }
};
```
