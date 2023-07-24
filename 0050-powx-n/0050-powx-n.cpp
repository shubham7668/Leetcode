class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1;
        long long nn=n; //Copy of n to avoid overflow
        
        if(nn<0) nn = -1*nn; //make nn positive
        
        while(nn){
            if(nn%2){        //odd
                ans=ans*x;
                nn=nn-1;
            }
            else{            //even
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0) ans=(double)(1)/(double)(ans);
        return ans;
    }
};