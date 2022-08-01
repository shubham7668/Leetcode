class Solution {
    public int minimumOperations(int[] nums) {
        int ans = 0;
        
        int nehal [] = new int[nums.length];
        Arrays.fill(nehal,0);
        
            while(!Arrays.equals(nums,nehal)){
                 int min = minval(nums);

                 for(int i=0; i<nums.length; i++){
                   if(nums[i] == 0)
                       continue;
                    else
                       nums[i] = nums[i]-min;
                 }
                ans++;
          }
            return ans;
     }
    public int minval(int [] nums){
        
         int min = Integer.MAX_VALUE;
        for(int i=0; i<nums.length; i++){
            if(nums[i] == 0) continue;
             else{
                 
                  min = Math.min(nums[i],min);
             }
        }
        return min;
    }
}