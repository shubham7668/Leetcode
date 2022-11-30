//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	vector<int> start;

     vector<int>mid;

      

     for(int i=0;i<n/2;i++){

         start.push_back(arr[i]);

     }

     for(int j=n/2;j<n;j++){

         mid.push_back(arr[j]);

     }

     reverse(mid.begin(),mid.end());

      int k=0;

      int i=0;

      int j=0;

      while(j<mid.size()){

          arr[k++]=mid[j];

          if(i<start.size())

          arr[k++]=start[i];

          i++;

          j++;

      }
    	 
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends