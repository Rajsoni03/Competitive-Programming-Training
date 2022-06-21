// Sort an array of 0s, 1s and 2s
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
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

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends