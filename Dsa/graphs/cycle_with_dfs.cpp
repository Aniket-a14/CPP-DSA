//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool DetectCycle(int Node, int parent, vector<vector<int>>& adj, vector<bool>& visited){
    visited[Node]=1;

    for(int j=0;j<adj[Node].size();j++){
        if(parent==adj[Node][j]){
            continue;
        }
        if(visited[adj[Node][j]]==1){
            return 1;
        }
        if(DetectCycle(adj[Node][j],Node,adj,visited)){
            return 1;
        }
    }
    return 0;
}

    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int v=adj.size();
        vector<bool> visited(v,0);
        
        for(int i=0;i<v;i++){
            if(!visited[i]&&DetectCycle(i,-1,adj,visited))
            return 1;
        }
        return 0;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends