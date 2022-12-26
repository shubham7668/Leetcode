//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
      long long cmax=0,gmax=0;
   int j=len-1;
   for(int i=0;i<j;){
       int t;
       t=min(A[i],A[j]);
       cmax= t*(j-i);
       if(gmax<cmax){
           gmax=cmax;
       }
       if(A[j]<A[i]){
           j--;
       }
       else{
           i++;
       }
   }
   return gmax;

}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends