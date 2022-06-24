class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       
        int deficit=0; //We will store how short we are in gas
        int balance=0;
        int start=0;   // Start from 0th index
        
        for(int i=0;i<gas.size();i++){
            balance += gas[i] - cost[i];
            
            if(balance<0){
                deficit += balance; //We will store how much we are short in gas
                start=i+1;  //Update the start to next block
                balance=0;  //Balance will be 0 coz we are starting fresh from new block
            }
        }
        if(balance+deficit >= 0)  //We succesfully completed the cycle
            return start;
        else
            return -1;     
    }
};