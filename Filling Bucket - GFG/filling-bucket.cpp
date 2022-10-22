//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        int secondLast = 1, last = 1;
        for(int i = 2; i <= N; i++){
            int temp = (last + secondLast) % 100000000;
            secondLast = last;
            last = temp;
        }
        return last;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends