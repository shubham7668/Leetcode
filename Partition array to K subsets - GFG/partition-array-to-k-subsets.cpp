// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    bool isKPartitionPossible(int a[], int n, int k)
   {
        
        sort(a,a+n);
        int sum=0; 
        for(int i=0;i<n;i++)
        sum+=a[i];
        
        if(sum%k!=0)return false;
        sum=sum/k;
       
        for(int i=1;i<=k;i++)
        {
            int cur=0;
            for(int i=n-1; i>=0; i--)
            {
                if(a[i]+cur<=sum)
                {
                    cur+=a[i];
                    a[i]=0;
                }
                
                if(cur==sum)
                break;
            }
            if(cur<sum)return false;
        }
       return true;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends