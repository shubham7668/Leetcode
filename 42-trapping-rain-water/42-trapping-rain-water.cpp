class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        //Brute Force
//         int ans=0;
//         for(int i=0;i<height.size();i++){
//             int leftMax=INT_MIN,rightMax=INT_MIN;
            
//             for(int j=i;j>=0;j--)
//                 leftMax=max(leftMax,height[j]);
            
//             for(int j=i;j<height.size();j++)
//                 rightMax=max(rightMax,height[j]);
            
//             ans+=min(leftMax,rightMax)-height[i];
            
//         }
//         return ans;
        
        //Better approach-> Prefix max,suffix max
        
        vector<int> premax(n),suffixmax(n); 
        int maxi=height[0];
        for(int i=0;i<n;i++){
            if(height[i]>maxi) maxi=height[i];
            premax[i]=maxi;
        }
        int maxi1=height[n-1];
        for(int i=n-1;i>=0;i--){
            if(maxi1<height[i]) maxi1=height[i];
            suffixmax[i]=maxi1;
        }
        for(auto i:premax) cout<<i<<" ";
        cout<<endl;
        for(auto i:suffixmax) cout<<i<<" ";
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(premax[i],suffixmax[i])-height[i];
        }
        return ans;
    }
};