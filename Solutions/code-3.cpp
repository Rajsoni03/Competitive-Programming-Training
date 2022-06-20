// Find minimum and maximum element in an array 
// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

/*
Example 1:
Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000
 
Example 2:
Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> ans = {a[0], a[0]};
    
    for (int i = 1; i < n; i++){
        if (a[i] < ans.first) ans.first = a[i];
        if (a[i] > ans.second) ans.second = a[i];
    }
    
    return ans;
}