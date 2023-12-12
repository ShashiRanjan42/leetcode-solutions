//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int temp[V] = {0};
        queue<int> q;
        
        q.push(0);
        temp[0] = 1;
        
        vector<int> ans;
        
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            
            ans.push_back(top);
            
            for(auto it : adj[top]) {
                
                if(!temp[it]) {
                    temp[it] = 1; 
                    q.push(it); 
                }
            }
            // for(int i=0; i<adj[top].size(); i++)
            // {
            //     if(!temp[i])
            //     {
            //         temp[adj[top][i]] = 1;
            //         q.push(adj[top][i]);
            //     }
                
            // }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends