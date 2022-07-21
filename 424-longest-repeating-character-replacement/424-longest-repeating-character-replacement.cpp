class Solution {
public:
    int characterReplacement(string s, int k) {
         int n=s.length();
    
        //occurence of maximum charater count inside any window
        int maxcount=0;
        //it will contain longest repaeting character
        int ans=0;
        //it will store character count
        vector<int> v(26,0);
    
        int j=0;
        int i;
        //Apply sliding window
        //whenever windowsize- maxcount>k then slide it
        //it means we have less than or equal to k then we can replace it to make into                 maxcount character type
 
        for(i=0; i<n; i++){
            int count=++v[s[i]-'A'];
            //storing the maximum count of character inside window
            maxcount=max(maxcount, count);
            
            //whenver window size(i-j+1) - maxcount > k then shrink the window
            while(i-j+1-maxcount> k){
                v[s[j]-'A']--;
                j++;
            }
            //update the largest window possible with k replcaement
            ans=max(ans, i-j+1);
        }
        return ans;
    }

};