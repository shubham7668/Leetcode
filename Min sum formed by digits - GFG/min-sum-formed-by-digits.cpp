// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n){
       
       sort(arr,arr+n);
       
       long long int ans1=0,ans2=0;
       
       for(int i=0;i<n;i++){
           if(i%2==0){
               ans1=ans1*10+arr[i];
           }
           else{
               ans2=ans2*10+arr[i];
           }
       }
       return ans1+ans2;
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
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends