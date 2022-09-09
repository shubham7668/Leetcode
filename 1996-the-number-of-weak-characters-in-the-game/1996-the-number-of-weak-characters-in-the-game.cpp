class Solution {
public:
//     int numberOfWeakCharacters(vector<vector<int>>& properties) {
//         //brute force -> (nlogn+n^2)
//         int ans=0;
//         //sort(properties.begin(),properties.end());
        
//         for(int i=0;i<properties.size()-1;i++){
//             for(int j=0;j<properties.size();j++){ 
//                 if(properties[i][0]<properties[j][0] &&
//                    properties[i][1]<properties[j][1]){
//                     ans++;
//                     break;
//                 }
//              }
//          }
//         return ans;
//     }
        
        //Optimised
        //handling the edge case while sorting
     static bool comp(vector<int> &a, vector<int> &b){
          if (a[0] == b[0]) return a[1] > b[1];
          return a[0] < b[0];
     }
     
    int numberOfWeakCharacters(vector<vector<int>> &properties){
          sort(properties.begin(), properties.end(), comp); //sorting the array
          int mtn = INT_MIN;                                //max till now while moving from right
          int ans = 0;

          for (int i = properties.size()- 1;i>= 0;i--){
              if (properties[i][1] < mtn)
                  ans++;
              mtn = max(mtn, properties[i][1]);
          }
          return ans;
    }
};