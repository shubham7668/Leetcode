class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++){
            string temp=strs[i];
            int j=0,k=0;
            while(j<temp.size()){
                if(ans[k]==temp[j]){
                    k++;
                    j++;
                }
                else
                    break;
            }    
            ans.erase(k,ans.size());
        }
        return ans;
    }
};