#include<iostream>
#include<vector>
using namespace std;

bool DetectCycle(int Node, int parent, vector<int> adj[], vector<bool>& visited){
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

int main(){
    int vertex,edges;
    cout<<"Enter vertex and edges: ";
    cin>>vertex>>edges;

    vector<int> graph[vertex];

    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(vertex,0);

    for(int i=0;i<vertex;i++){
        if(!visited[i]&&DetectCycle(0, -1, graph, visited)){
            cout<<"Cycle detected"<<endl;
        }
    }
    return 0;
}