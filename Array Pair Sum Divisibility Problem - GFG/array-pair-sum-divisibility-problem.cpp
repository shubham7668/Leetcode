//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> v, int k) {

    map<int, bool> m;

    int n=0;

     for(int i=0; i<v.size(); i++){

         v[i]%=k;

         if(m[v[i]]){

             n++;

             m[v[i]]=false;

         }

         else{

                int comp = k - v[i];

                ///Base Case

                if(comp==k) m[0]=true;

                else m[comp]=true;

         }

     } 

     if(n==v.size()/2) return true;

     else return false;

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends