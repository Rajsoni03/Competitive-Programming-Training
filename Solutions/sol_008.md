# Check If It Is a Straight Line - [Practice - LeetCode](https://leetcode.com/problems/check-if-it-is-a-straight-line/)

You are given an array coordinates, `coordinates[i] = [x, y]`, where `[x, y]` represents the coordinate of a point. <br>

Check if these points make a straight line in the XY plane.


Example:1
```
Input: 
coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]

Output: 
true
```
Example:2
```
Input: 
coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]

Output: 
false
```

## Solution 1 

Time - O(N)<br>
Space - O(1)

```cpp
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        
        int dx = coordinates[1][0] - coordinates[0][0];
        int dy = coordinates[1][1] - coordinates[0][1];
        
        for (int i = 2; i < n; i++){
            int dxi = coordinates[i][0] - coordinates[0][0];
            int dyi = coordinates[i][1] - coordinates[0][1];
            
            if (dy*dxi != dyi*dx){
                return false;
            }               
        }
        return true;
    }
};
```