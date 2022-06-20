// Complete Sum
// https://www.codingninjas.com/codestudio/problems/complete-sum_3161880

/*
Example :
N = 3
A = [ 1, 2, 3 ] 

Explanation : 
Complete sum for index 0 is ‘A[0]=1’.
Complete sum for index 1 is ‘A[0] + A[1]’ = 3.
Complete sum for index 2 is ‘A[0] + A[1] + A[2]’ = 6.
So, we output [ 1, 3, 6 ].
*/

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