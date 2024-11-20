#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<bool>>mat(vertex,vector<bool>(vertex,0));

    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}