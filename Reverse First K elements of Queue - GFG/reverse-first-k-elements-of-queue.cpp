// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> s;
    for(int i=0;i<k;i++){
        int temp=q.front();
        s.push(temp);
        q.pop();
    }
    for(int i=0;i<k;i++){
        int temp=s.top();
        q.push(temp);
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        int temp=q.front();
        q.push(temp);
        q.pop();
    }
    return q;
}