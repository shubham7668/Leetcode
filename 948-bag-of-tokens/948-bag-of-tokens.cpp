class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int score=0;
        
        while(i<j){
            if(power>=tokens[i]){
                power-=tokens[i++];
                score++;
            }
            else if(score>=1 && tokens[j]+power>=tokens[i]){
                power+=tokens[j--];
                score--;
            }
            else break;
        }
        while(i<=j && power>=tokens[i]){
            power-=tokens[i++];
            score++;
        }
        return score;
    }
};