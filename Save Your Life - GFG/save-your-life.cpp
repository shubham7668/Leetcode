//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{

public:

      string maxSum(string w,char x[], int b[],int n){     

          map<char,int> check;

          for(int i=0;i<n;i++)

          check[x[i]]=b[i];

          

    int curr=0,mx=INT_MIN;

    string currstr="",ans="";

    

        for(int i=0;i<w.length();i++){

           

           int temp;

           if(check.find(w[i])==check.end())

           temp=w[i];

           else

           temp=check[w[i]];

           

           

           if(temp+curr>=temp){

           curr+=temp,currstr.push_back(w[i]);

           

           }

           

           else{

               curr=temp;

               currstr="";

               currstr.push_back(w[i]);

               

             }

           

         if(curr>mx)

mx=curr,ans=currstr;

      }

      return ans;

}

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends