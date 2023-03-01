class Solution {
public:
    void merge(vector<int>& nums , int low , int mid , int high){
        int i=low,j=mid+1;
        vector<int> temp(high-low+1);
        int k=0;
    
        while(i<=mid && j<=high){
            if(nums[i]<=nums[j]) temp[k++]=nums[i++];
            else temp[k++]=nums[j++];
        }
        while(j<=high) temp[k++]=nums[j++];
        while(i<=mid) temp[k++]=nums[i++];
    
        k=0;
        for(int i=low;i<=high;i++) nums[i]=temp[k++];
}
    
void mergesort(vector<int> &nums , int low , int high){
    if(low>=high) return;
    
    int mid = low +( high-low)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);
}


public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
