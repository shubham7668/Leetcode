class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxPro=nums[0];
        // for(int i=0;i<nums.size();i++) maxPro=max(maxPro,nums[i]);
        // for(int i=0;i<nums.size()-1;i++){
        //     int temp=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         temp*=nums[j];
        //         maxPro=max(maxPro,temp);
        //     }
        // }
        // return maxPro;
        
        int n=nums.size();
        int res=nums[0], pro=1,endpoint=nums[0];
        // from front side
		for(int i=0;i<n;i++){
            if(pro*nums[i]==0) pro=1;
            pro=pro*nums[i];
            endpoint=max(pro,nums[i]);
            res=max(res,endpoint);
        }
        int res1=nums[n-1]; pro=1; endpoint=nums[n-1];
      //  from back side of array
		for(int i=n-1;i>=0;i--){
            if(pro*nums[i]==0) pro=1;
            pro=pro*nums[i];
            endpoint=max(pro,nums[i]);
            res1=max(res1,endpoint);
        }
        
       
    return max(res,res1);
    }
};