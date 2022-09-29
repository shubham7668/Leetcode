class Compare {
    public:
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        int a1 = a.first, b1 = b.first;
        int x  =a.second;
        if(abs(a1-x) == abs(b1-x))
            return a1 < b1;
        return abs(a1-x) < abs(b1-x);
    }
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> heap;
        
        for(int i = 0; i<k; i++) {
            heap.push({arr[i], x});
        }
        
        for(int i = k; i<arr.size(); i++) {
            auto [val, x1] = heap.top();
            if(abs(val-x) > abs(arr[i]-x)) {
                heap.pop();
                heap.push({arr[i], x});
            }
        }
        vector<int> output;
        while(!heap.empty()) {
            auto [val, x1] = heap.top(); heap.pop();

            output.push_back(val);
        }
        sort(output.begin(), output.end());
        return output;
            
    }
};