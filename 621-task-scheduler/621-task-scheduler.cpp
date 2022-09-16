class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0) 
            return tasks.size();
        int freq[26] = {0};
        for(char c: tasks) 
            freq[c-'A']++;
        sort(freq,freq+26);
        int max_val = freq[25]-1; //don't need to wait at the end
        //max_val indicates the number of times the task with maximum frequency has to cool
        int idle_slots = max_val*n; 
        //try to do other tasks in the idle positions 
        for(int i=24;i>=0;i--) {
            idle_slots -= min(freq[i],max_val);    
//because there can be others slot with same maximum frequency and in that case, it's not possible to accomodate them all that within the idle slots (as in case1 ["A","A","A","B","B","B"])
            cout<< min(freq[i],max_val)<<" " ;
        }
        return (idle_slots>0)?tasks.size()+idle_slots : tasks.size();
    }
};