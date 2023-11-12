#include <bits/stdc++.h>
using namespace std;

int n = 6;
//vector<vector<int>> adj_mat(n+1, vector<int>(n+1)); adj matrix
vector<vector<int>> adj_list(n+1);

map<int,bool> visited;

void shortest_distance(int src, int dest){
    
    vector<int> dist(n+1, INT_MAX);
    dist[src] = 0;
    
    queue<int> q;
    q.push(src);
    
    while(!q.empty()){
        
        int curr = q.front();
        q.pop();
        
        for(int neighbor : adj_list[curr]){
            
            if(dist[curr]+ 1 < dist[neighbor]){
                dist[neighbor] = dist[curr] + 1;
                q.push(neighbor);
            }
        }
    }
    
    cout<<dist[dest]<<"\n";
}
void bfs(int node){
    
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    
    while(!q.empty()){
        
        int curr = q.front();
        q.pop();
        cout<<curr<<"\n";
        
        for(int neighbor : adj_list[curr]){
            if(visited.count(neighbor) == 0){
                visited[neighbor] = 1;
                q.push(neighbor);
            }
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
   
   //bfs(1);
   shortest_distance(2,6);
   
   
}