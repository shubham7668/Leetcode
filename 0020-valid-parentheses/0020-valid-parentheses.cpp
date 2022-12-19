class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' or s[i]=='{' or s[i]=='(') st.push(s[i]);
            else{
                if(st.empty()) return 0;
                
                char ch=st.top();
                st.pop();
                
                if(ch=='[' and s[i]==']' ||
                   ch=='{' and s[i]=='}' ||
                   ch=='(' and s[i]==')'){}
                
                else return 0;
            }
        }
        if(st.empty()) return 1;
        else return 0;
    }
};