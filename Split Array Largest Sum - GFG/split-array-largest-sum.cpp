//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPossible(int arr[] ,int N, int K,int mid)

  {

      int count=1;

      int sum1=0;

      for(int i=0;i<N;i++)

      {

          if(sum1+arr[i]<=mid)

          {

              sum1+=arr[i];

          }

          else{

              count++;

              if(count>K||arr[i]>mid){

                  return false;

              }

              sum1=arr[i];

          }

      }

      return true;

  }

    int splitArray(int arr[] ,int N, int K) {

        // code here

        int s=0;

        int sum=0;

        for(int i=0;i<N;i++)

             sum+=arr[i];

        int e=sum;

        int ans=-1;

        int mid=s+(e-s)/2;

        while(s<=e)

        {

            if(isPossible(arr,N,K,mid)){

                ans=mid;

                e=mid-1;

            }

            else

            {

                s=mid+1;

            }

            mid=s+(e-s)/2;

        }

        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends