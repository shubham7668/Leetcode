class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
//         int n=nums1.size();
//         int m=nums2.size();
        
//         if(nums1==nums2) return n;
        
//         int ans=INT_MIN;
//         for(int i=0;i<n;i++){
//             int temp=0,j=0;
            
//             for(;j<m;j++) if(nums2[j]==nums1[i]){break;}
            
//             int k=i,l=j;
//             while(k<n && l<m){
//                 if(nums1[k]==nums2[l]){
//                     temp+=1;
//                     k++;
//                     l++;
//                 }
//                 else break;
//             }
//             cout<<i<<"->"<<temp<<" ";
//             ans=max(ans,temp);
//         }
//         return ans;
        
        int n1 = A.size(), n2 = B.size();
     
        vector<int> dp(n2+1,0);
        int ans = 0;
        
        for(int i=0;i<n1;i++){
            for(int j=n2-1;j>=0;j--){
                if(A[i]==B[j]) dp[j+1] = 1+dp[j];
                 else dp[j+1] =0;
                ans=max(ans,dp[j+1]);
            }
        }
        return ans;
    }
};