class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> hashmap;
        for(string& word : words) {
            hashmap[word] += 1;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it = hashmap.begin(); it != hashmap.end(); ++it) {
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > k) pq.pop();
        }
        vector<string> res;
        while(!pq.empty()) {
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        return res;
    }
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
};

// class Solution {
// public:
    
//     static bool comparator(pair<string,int> p1, pair<string,int> p2)
//     {
//         if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
//             return true;
//         return false;
//     }
    
//     vector<string> topKFrequent(vector<string>& words, int k) {
//         unordered_map<string,int> m1;
        
//         for(int i=0; i<words.size(); i++)
//             m1[words[i]]++;
        
//         vector<pair<string,int>> v1;
//         for(auto it=m1.begin(); it!=m1.end(); it++)
//             v1.push_back({it->first,it->second});
        
//         sort(v1.begin(),v1.end(),comparator);
        
//         vector<string> ans;
//         for(int i=0; i<k; i++)
//         {
//             ans.push_back(v1[i].first);
//         }
        
//         return ans;
//     }
// };