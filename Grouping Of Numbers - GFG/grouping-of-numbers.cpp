//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        // code here
         int s=0;

        map<int,int>m;

        for(int i=0;i<N;i++)m[arr[i]%K]++;

        int i=1,j=K-1;

        while(i<j){

            s+=max(m[i],m[j]);

            i++;j--;

        }

        if(i==j and m[i]>0)s++;// corner case 1

        if(m[0]>0)s++;// corner case 2

        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends