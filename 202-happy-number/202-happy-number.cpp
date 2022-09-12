class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(true){
            int temp=0;
            while(n){
                int r=n%10;
                temp+=r*r;
                n/=10;
            }
            n=temp;
            if(n==1) return 1;
            auto i = s.find(n);
            if(i!=s.end()) return 0;
            s.insert(n);
        }
     }
};