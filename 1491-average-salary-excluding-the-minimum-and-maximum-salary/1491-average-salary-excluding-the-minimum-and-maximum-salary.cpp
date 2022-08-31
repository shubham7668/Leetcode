class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum;
        for(int i=1;i<salary.size()-1;i++){
            //if(i==0) continue;
            sum+=salary[i];
        }
        return sum/(salary.size()-2);
    }
};