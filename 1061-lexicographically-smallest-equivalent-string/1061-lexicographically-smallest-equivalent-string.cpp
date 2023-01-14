class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
    unordered_map<int, int> parent;
    unordered_map<int, vector<int>> equivalency;
    for(int i = 0; i < 26; i++) {
        parent[i] = i;
        equivalency[i].push_back(i);
    }
    for(int i = 0; i < s1.size(); i++) {
        int a = s1[i] - 'a', b = s2[i] - 'a';
        int pa = find(parent, a), pb = find(parent, b);
        if(pa == pb) continue;
        parent[pa] = pb;
        equivalency[pb].insert(equivalency[pb].end(), equivalency[pa].begin(), equivalency[pa].end());
    }
    for(int i = 0; i < baseStr.size(); i++) {
        int p = find(parent, baseStr[i] - 'a');
        baseStr[i] = *min_element(equivalency[p].begin(), equivalency[p].end()) + 'a';
    }
    return baseStr;
}
int find(unordered_map<int, int>& parent, int x) {
    if (parent[x] != x) parent[x] = find(parent, parent[x]);
    return parent[x];
}

};