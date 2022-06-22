# Complete Sum - [Practice - CodeStudio](https://www.codingninjas.com/codestudio/problems/complete-sum_3161880)

Ninja has an array `A` of size `N`. He recently created a topic `Complete Sum` and defined the term <br>
`completeSum[i] = Sum (A[0] … A[i])`.

Output the complete sum array of array ‘A’.

Example:1
```
Input:
N = 3
A = [ 1, 2, 3 ] 

Output:
[ 1, 3, 6 ]

Explanation : 
Complete sum for index 0 is ‘A[0]=1’.
Complete sum for index 1 is ‘A[0] + A[1]’ = 3.
Complete sum for index 2 is ‘A[0] + A[1] + A[2]’ = 6.
So, we output [ 1, 3, 6 ].
```
Example:2
```
Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}

Output:
min = 1, max = 56789]
```

## Solution 1 - Quadratic Time

Time - O(N<sup>2</sup>)<br>
Space - O(N)

```cpp
vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
    
    vector<int> ans(n);
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < i+1; j++){
            sum += a[j];
        }
        ans[i]  = sum;
    }
    return ans;
}
```

## Solution 2 - Linear Time

Time - O(N)<br>
Space - O(N)

```cpp
vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
    
    int sum = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++){
        sum += a[i];
        ans[i]  = sum;
    }
    return ans;
}
```