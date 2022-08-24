class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return 0;
        int rem=0;
        while(n>1){
            rem=rem+n%3;
            if(rem!=0) break;
            n/=3;
        }
        cout<<rem<<" ";
        if(n==1 && rem==0) return 1;
        else return 0;
    }
};