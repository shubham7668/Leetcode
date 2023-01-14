class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
    // Create a map to store the representative character of each set 
    unordered_map<int, int> parent;
    // Create a map to store all the characters in the set
    unordered_map<int, vector<int>> equivalency;
    // Initialize the maps with all characters as separate sets
    for(int i = 0; i < 26; i++) {
        parent[i] = i;
        equivalency[i].push_back(i);
    }
    // Union the equivalent characters in s1 and s2
    for(int i = 0; i < s1.size(); i++) {
        int a = s1[i] - 'a', b = s2[i] - 'a';
        int pa = find(parent, a), pb = find(parent, b);
        if(pa == pb) continue;
        parent[pa] = pb;
        // Merge the characters in the set
        equivalency[pb].insert(equivalency[pb].end(), equivalency[pa].begin(), equivalency[pa].end());
    }
    // Replace each character in baseStr with the lexicographically smallest character in the list of equivalent characters
    for(int i = 0; i < baseStr.size(); i++) {
        int p = find(parent, baseStr[i] - 'a');
        baseStr[i] = *min_element(equivalency[p].begin(), equivalency[p].end()) + 'a';
    }
    return baseStr;
}
// Helper function to find the representative character of a set
int find(unordered_map<int, int>& parent, int x) {
    if (parent[x] != x) parent[x] = find(parent, parent[x]);
    return parent[x];
}

};