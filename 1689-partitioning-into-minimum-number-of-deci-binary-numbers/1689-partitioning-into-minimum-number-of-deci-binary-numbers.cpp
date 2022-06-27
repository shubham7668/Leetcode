class Solution {
public:
    int minPartitions(string n) {
      char ans='0';
      for(int i=0;i<n.size();i++){
        if(n[i]>ans)
          ans=n[i];
      }
      ans=ans-48; //Change ascii -> orginal value
      return ans;
    }
};