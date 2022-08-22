class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Brute Force-> O(3n)
//         int cnt0=0,cnt1=0,cnt2=0;
//         for(auto i: nums){
//             if(i==0) cnt0++;
//             if(i==1) cnt1++;
//             if(i==2) cnt2++;
//         }
        
//         // cout<<cnt0<<" "<<cnt1<<" "<<cnt2<<endl;
//         int i=0;
//         while(cnt0){
//             nums[i++]=0;
//             cnt0--;
//         }
//         while(cnt1){
//             nums[i++]=1;
//             cnt1--;
//         }
//         while(cnt2){
//             nums[i++]=2;
//             cnt2--;
//         }
        
        //Optimised -> O(n)
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};