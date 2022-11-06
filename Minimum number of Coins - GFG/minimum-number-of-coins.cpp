//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
          int notes[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
         
        
        int i = 9 ; 
        vector<int> v ;
        
        while( i >= 0) { 
            if( N == 0) break ;
            if( N >= notes[i] ) 
            {
                
                v.push_back(notes[i]) ;
                N -= notes[i] ;
            } 
            else 
            {
                i--;
            }
        }
        
        return v ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends