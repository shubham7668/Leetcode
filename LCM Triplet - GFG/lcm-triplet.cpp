//{ Driver Code Starts
// Initial Template for C++

// Initial Template for C++
// Back-end complete function Template for C++
// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long lcmTriplets(long n) {
        // code here
        
        if(n<=2) return n;
        
        if(n%2!=0)
            return n*(n-1)*(n-2);
        else{
            if(n%3==0){
                return (n-1)*(n-2)*(n-3);
            }
            else
                return n*(n-1)*(n-3);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.lcmTriplets(N) << "\n";
    }
}
// } Driver Code Ends