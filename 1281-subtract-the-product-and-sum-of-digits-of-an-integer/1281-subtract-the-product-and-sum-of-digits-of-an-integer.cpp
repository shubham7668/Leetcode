class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        int temp=n;
        int rem=0;
        while(temp){
            rem=temp%10;
            sum+=rem;
            product*=rem;
            temp/=10;
        }
        return product-sum;
    }
};