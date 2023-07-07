class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t=0,f=0;
        int i=0,j=0;
        while(j<answerKey.size()){
            if(answerKey[j]=='T') t++;
            else f++;
            if(min(t,f)>k){
                if(answerKey[i]=='T') t--;
                else f--;
                i++;
            }
            j++;
        }
        return j-i;
    }
};