//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){

		    // Code here

		    int i=0,j=0,max_cnt=0,ans=0;

		    map<char,int>m;
		      	
		      	while(j<s.length())    		 		                 
		    {
		        m[s[j]]++;

		        max_cnt=max(max_cnt,m[s[j]]);
               
                   if((j-i+1)-max_cnt>k)
                   {
                    m[s[i]]--;		            
                    i++;
		        }
		        ans=max(ans,j-i+1);
		        j++;
		    }
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends