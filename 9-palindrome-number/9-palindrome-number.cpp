class Solution {
public:
    bool isPalindrome(int x) {
//         int temp=x;
//         int reverse=0;
//         int rem=0;
//         if(x<0) return 0;
//         while(temp){
//             rem=temp%10;
//             reverse=reverse*10+rem;
//             temp=temp/10;
//         }
        
//         if(reverse==x) return 1;
//         else return 0;
//     }
        
        string str=to_string(x);
        int i=0,j=str.size()-1;
        while(i<=j){
            if(str[i]!=str[j]) return 0;
            i++;
            j--;
        }
        return 1;
    }
};