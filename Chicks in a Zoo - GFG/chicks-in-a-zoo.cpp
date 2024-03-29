//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	long long int NoOfChicks(int n){
	  long long int popn[36];
	  long long int brth[36];
	  
	  popn[0]=0;popn[1]=1;
	  brth[0]=0;brth[1]=1;
	  
	  for(int i=2;i<=6;i++){
	      brth[i]=2*(popn[i-1]-0);
	      popn[i]=brth[i]+popn[i-1];
	  }
	  
	  for(int i=7;i<=n;i++){
	      brth[i]=2*(popn[i-1]-brth[i-6]);
	      popn[i]=popn[i-1]+brth[i]-brth[i-6];
	  }
	  return popn[n];
	}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends