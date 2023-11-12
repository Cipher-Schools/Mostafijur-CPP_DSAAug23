#include <bits/stdc++.h>
using namespace std;

int n = 6;
//vector<vector<int>> adj_mat(n+1, vector<int>(n+1)); adj matrix
vector<vector<int>> adj_list(n+1);

map<int,bool> visited;

bool path_exist(int node, int dest){
    
    if(node == dest)
    return true;
    
    visited[node] = true;
    
    for(int neighbor : adj_list[node]){
        
        if(visited.count(neighbor) == 0){
            
            bool f = path_exist(neighbor, dest);
            
            if(f)
            return f;
        }
    }
    
    return false;
}
void dfs(int node){
    
    visited[node] = true;
    cout<<node<<"\n";
    
    /* adj matrix approach
    for(int i = 1; i<=n; i++){
        if(adj_mat[node][i] == 1 && visited.count(i) == false){
            dfs(i);
        }
    }
    */
    
    // adj list
    for(int i=0; i<adj_list[node].size(); i++){
        int neighbor = adj_list[node][i];
        
        if(visited.count(neighbor) == false){
            dfs(neighbor);
        }
    }
    
    
}

int main() {
  
   int u,v;
   int edges;
   cin>>edges;
   
   for(int i=0; i<edges; i++){
       cin>>u>>v;
       /*adj matrix
       adj_mat[u][v] = 1;
       adj_mat[v][u] = 1;
       */
       
       adj_list[u].push_back(v);
       adj_list[v].push_back(u);
   }
   
   //dfs(1);
   cout<<path_exist(2,5);
   
   
}