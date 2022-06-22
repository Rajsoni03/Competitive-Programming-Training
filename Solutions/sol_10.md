# Sort an array of 0s, 1s and 2s - [Practice - LeetCode](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#)

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example:1
```
Input: 
N = 5
arr[]= {0 2 1 2 0}

Output:
0 0 1 2 2

Explanation:
0s 1s and 2s are segregated 
into ascending order.
```
Example:2
```
Input: 
N = 3
arr[] = {0 1 0}

Output:
0 0 1

Explanation:
0s 1s and 2s are segregated 
into ascending order.
```

## Solution 1 - using count variable (2 Time Traversal)

Time - O(N)<br>
Space - O(1)

```cpp
class Solution{
    public:
    void sort012(int a[], int n){
        // code here 
        int count[3] = {0, 0, 0};
        
        for (int i = 0; i < n; i++){
            count[a[i]]++;
        }
        int k = 0;
        for (int i = 0; i < 3; i++){
            while(count[i]--)
                a[k++] = i;
        }
    }  
};
```

## Solution 2 - using 3 pointers (Single Traversal)

Time - O(N)<br>
Space - O(1)

```cpp
class Solution
{
    public:
    void sort012(int a[], int n){
        // code here
        int start = 0;
        int mid = 0;
        int end = n-1;
        
        while(mid <= end){
            if (a[mid]==0)
                swap(a[mid++], a[start++]);
            else if (a[mid]==1)
                mid++;
            else if (a[mid]==2)
                swap(a[mid], a[end--]);
        }
        
    }
    
};
```