class Solution {
public:
	string getHint(string secret, string guess) {
		int n=secret.size(), bulls=0, cows=0;
		vector<int> nums(10,0);
		for(int i=0;i<n;i++){
			if(secret[i]==guess[i]) bulls++;
			else{
				if(nums[secret[i]-'0']++ < 0) cows++;
				if(nums[guess[i]-'0']-- > 0) cows++;
			}
		}
		return to_string(bulls)+"A"+to_string(cows)+"B";
	}
};