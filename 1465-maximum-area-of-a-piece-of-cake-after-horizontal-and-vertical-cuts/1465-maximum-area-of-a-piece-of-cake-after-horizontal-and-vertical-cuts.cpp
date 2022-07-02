class Solution {
private:
    int solve(vector<int> &v,int n){
        sort(v.begin(),v.end());
        int diff=v[0];
        
        for(int i=1;i<v.size();i++) diff=max(diff,v[i]-v[i-1]);
        
        diff=max(diff,n-v.back());
        
        return diff;
    } 
    
    
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
//         sort(horizontalCuts.begin(),horizontalCuts.end());
//         sort(verticalCuts.begin(),verticalCuts.end());
        
//         long n=horizontalCuts.size();
//         long m=verticalCuts.size();
//         long height=horizontalCuts[0];
//         long length=verticalCuts[0];
        
//         for(long i=1;i<n;i++) height=max(height,horizontalCuts[i]-horizontalCuts[i-1]);
        
//         height=max(height,h-horizontalCuts[n-1]);
        
//         for(long i=1;i<m;i++) length=max(length,verticalCuts[i]-verticalCuts[i-1]);
         
//         length=max(length,w-verticalCuts[m-1]);
        
        
//         return (height*length) % 1000000007;
        
        long long length=solve(horizontalCuts,h);
        long long height=solve(verticalCuts,w);
        
        return (length*height)%1000000007;
    }
};