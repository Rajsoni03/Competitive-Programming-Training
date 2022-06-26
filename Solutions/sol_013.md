# Move all negative elements to end - [Practice - LeetCode](https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1)

Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

Example:1
```
Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }

Output : 
1  3  2  11  6  -1  -7  -5
```
Example:2
```
Input : 
N=8
arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}

Output :
7  9  10  11  -5  -3  -4  -1
```

## Solution 1 - use another array to store result 

Time - O(N)<br>
Space - O(N)

```cpp
class Solution{
    public:
    void segregateElements(int arr[],int n){
        // Your code goes here
        int result[n];
        
        int index = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] >= 0) 
                result[index++] = arr[i];
        }
        for (int i = 0; i < n; i++){
            if (arr[i] < 0) 
                result[index++] = arr[i];
        }
        for (int i = 0; i < n; i++){
            arr[i] = result[i];
        }
    }
};
```

## Solution 2 - Reduce one loop

Time - O(N)<br>
Space - O(N)

```cpp
class Solution{
    public:
    void segregateElements(int arr[],int n){
        // Your code goes here
        int result[n];
        
        int start = 0;
        int end = n-1;
        for (int i = 0; i < n; i++){
            if (arr[i] >= 0) 
                result[start++] = arr[i];
            if (arr[n-i-1] < 0) 
                result[end--] = arr[n-i-1];
        }
        for (int i = 0; i < n; i++){
            arr[i] = result[i];
        }
        
    }
};
```