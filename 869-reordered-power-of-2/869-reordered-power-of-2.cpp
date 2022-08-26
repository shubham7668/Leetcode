class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int maxi=pow(10,9);
        map<int,vector<int>> mp;
        
        for(int i=1;i<=maxi;i=i*2){
            int temp=i;
            vector<int> v(10,0);
            while(temp){
                int rem=temp%10;
                v[rem]++;
                temp=temp/10;
            }
            mp[i]=v;
        }
        
        vector<int> now(10,0);
        while(n){
            int rem=n%10;
            now[rem]++;
            n/=10;
        }
        
        for(auto i: mp){
            bool flag=1;
            vector<int> check=i.second;
            for(int j=0;j<10;j++){
                if(check[j]!=now[j]) flag=0;
            }
            if(flag==1) return 1;
        }
        return 0;
    }
};