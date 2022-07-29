class Solution {
private:
	string solve(string s){
		char c='a';
		string str;
		unordered_map<char,char>mp;
		for(auto x:s){
            if(mp.count(x)==1) str.push_back(mp[x]);
	
			else{
                mp[x]=c;
				c+=1;
				str.push_back(mp[x]);
			}
        }
        return str;
    }
public:
	vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
		vector<string> ans ;
		string pattern_1=solve(pattern);

		for(auto x:words){
			string s=solve(x);
			if(pattern_1.compare(s)==0){
				ans.push_back(x);
			}
		}

		return ans;

	}
};