//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(unordered_map<int,vector<int> > &adj, int u, vector<bool> &visit, vector<int> &result)
    {
        if(visit[u] == true)
            return;
        visit[u] = true;
        result.push_back(u);
        for(int i=0; i<adj[u].size(); i++)
        {
            int x = adj[u][i];
            
            if(!visit[x])
            {
                DFS(adj,x,visit,result);
            }
        }
            
    }
    vector<int> dfsOfGraph(int V, vector<int> mp[]) {
        // Code here
        unordered_map<int,vector<int> > adj;
        
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<mp[i].size(); j++)
            {
                adj[i].push_back(mp[i][j]);
            }
        }
        
        vector<bool> visit(V,false);
        
        vector<int> result;
        
        DFS(adj,0,visit,result);
        
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends