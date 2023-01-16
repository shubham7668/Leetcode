class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
        intervals.push_back(newInterval) ;
        sort(intervals.begin() , intervals.end()) ;
        int n = intervals.size() ;
        int l = intervals[0][0] ;
        int r = intervals[0][1] ;
        vector<vector<int>> ans ;
        for(int i = 1 ; i < n ; i++){
            if(intervals[i][0] <= r){
              r = max(intervals[i][1] , r) ;   
            }
            else{
                ans.push_back({l , r}) ;
                l = intervals[i][0] ;
                r = intervals[i][1] ;
            }
        }
        ans.push_back({l , r});
        return ans ;
    }
   
};
