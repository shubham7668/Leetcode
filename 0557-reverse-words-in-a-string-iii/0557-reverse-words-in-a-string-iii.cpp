class Solution {
public:
    string reverseWords(string s){
        int i=0,start=0,end=0;
        while(i<=s.size()){
            if(s[i]==' ' || i==s.size()){
                end=i-1;
                while(start<=end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                start=i+1;
            }
            i++;
        }
        return s;
    }
};