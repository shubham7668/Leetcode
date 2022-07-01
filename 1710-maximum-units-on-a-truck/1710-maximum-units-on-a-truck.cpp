class Solution {
private:
    static bool sortcol(vector<int> &v1,vector<int> &v2 ) {
        return v1[1] > v2[1];
    }
public:
    
    int maximumUnits(vector<vector<int>>& box, int &truckSize) {
        int row=box.size();
        int ans=0;
            
        sort(box.begin(),box.end(),sortcol);
        
        for(int i=0;i<row;i++){
            if(box[i][0]>truckSize){
                ans+=truckSize*box[i][1];
                truckSize=0;
            }
            else{
                truckSize -= box[i][0];
                ans += box[i][0]*box[i][1];
            }
        }
        return ans;
    }
};