class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> inDegree(n, 0);

        for (int i = 0; i < n; i++) {
            if (leftChild[i] != -1) {
                inDegree[leftChild[i]]++;
                if (inDegree[leftChild[i]] > 1) {
                    return false; // More than one incoming edge to a node
                }
            }

            if (rightChild[i] != -1) {
                inDegree[rightChild[i]]++;
                if (inDegree[rightChild[i]] > 1) {
                    return false; // More than one incoming edge to a node
                }
            }
        }

        int rootCount = 0;
        int rootCandidate = -1;
        for (int i = 0; i < n; i++) {
            if (inDegree[i] == 0) {
                rootCount++;
                if (rootCount > 1) {
                    return false; // More than one root node
                }
                rootCandidate = i;
            }
        }

        if (rootCount == 0) {
            return false; // No root node found
        }

        if (rootCount == 1) {
            return isConnected(n, leftChild, rightChild, rootCandidate);
        }

        return false;
    }

    bool isConnected(int n, vector<int>& leftChild, vector<int>& rightChild, int root) {
        vector<bool> visited(n, false);
        stack<int> dfs;
        dfs.push(root);

        while (!dfs.empty()) {
            int node = dfs.top();
            dfs.pop();

            if (visited[node]) {
                return false; // Cycle detected
            }

            visited[node] = true;

            if (leftChild[node] != -1) {
                dfs.push(leftChild[node]);
            }
            if (rightChild[node] != -1) {
                dfs.push(rightChild[node]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                return false; // Some nodes are not reachable
            }
        }

        return true;
    }
};
