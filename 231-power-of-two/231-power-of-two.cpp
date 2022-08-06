class Solution {
public:
    bool isPowerOfTwo(int n) {
        //Brute
        // for(int i=0;i<31;i++){  //2^31 is the max no that an int can store
        //     if(pow(2,i)==n) return 1;
        // }
        // return 0;
        
        //Bit Maniplution
        if(n<=0) return 0;
        
        if((n&(n-1))==0) return 1;
        else
            return 0;
        
    }
};