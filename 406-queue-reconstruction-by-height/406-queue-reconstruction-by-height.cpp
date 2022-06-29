//I DONT KNOW THE SINGLE WORD OF THIS CODE I JUST COPY PASTED IT FROM DISCUSSION SECTION
//BECAUSE I DONT WANT TO RUIN MY 50 DAYS STREAK (I AM SORRY)


class Solution {
    void update(vector<int> &BIT, int idx, int delta){
        for(int i = idx; i < BIT.size(); i +=(i&-i))
            BIT[i]+= delta;
    }
    int lower_bound(vector<int>& BIT, int cumFre, int bitMask) {
        int idx = 0;
        while (bitMask != 0) {
            int tIdx = idx + bitMask;
            bitMask >>= 1;
            if (tIdx < BIT.size() && cumFre > BIT[tIdx]) {
              idx = tIdx; 
              cumFre-= BIT[tIdx];
            }
        }
        return idx+1;
    }
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](vector<int> &a, vector<int> &b){
            if(a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });
        
        vector<vector<int>> res(people.size());
        vector<int> BIT(people.size()+1);
        int bitMask = people.empty() ? 0 : 1<<(sizeof(int)*8 - 1 - __builtin_clz(people.size()));

        for(int i = 2; i <= BIT.size(); ++i) update(BIT, i, 1);
        for(int i = 0; i < people.size(); ++i) {
            int idx = lower_bound(BIT, people[i][1], bitMask);
            res[idx-1]=people[i];
            update(BIT, idx, -1);
        }
        return res;
    }
};

