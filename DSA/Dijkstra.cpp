#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ipair;

int n = 6;
vector<vector<pair<int,int>>> adj_list(n+1);
void dijkstra(int src){
    
    vector<int> dist(n+1, INT_MAX);
    dist[src] = 0;
    
    map<int, bool> visited;
    
    priority_queue<ipair, vector<ipair>, greater<ipair>> pq;
    
    pq.push({0,src});
    
    while(!pq.empty()){
        
        ipair p = pq.top();
        pq.pop();
        
        int curr = p.second;
        visited[curr] = 1;
        
        for(ipair pa : adj_list[curr]){
            
            int neighbor = pa.first;
            int weight = pa.second;
            
        if(visited.count(neighbor) == 0 && dist[curr] + weight < dist[neighbor]){
                dist[neighbor] = dist[curr] + weight;
                pq.push({dist[neighbor], neighbor});
            }
            
        }
    }
    
    for(int i=1; i<=n ;i++)
    cout<<dist[i]<<" ";
}
void shortest_distance(int src){
    
    vector<int> dist(n+1, INT_MAX);
    dist[src] = 0;
    
    queue<int> q;
    q.push(src);
    
    while(!q.empty()){
        
        int curr = q.front();
        q.pop();
        
        for(pair<int,int> p : adj_list[curr]){
            
            int neighbor = p.first;
            int weight = p.second;
            
            if(dist[curr]+ weight < dist[neighbor]){
                dist[neighbor] = dist[curr] + weight;
                q.push(neighbor);
            }
        }
    }
    
    
    for(int i=1; i<=n ;i++)
    cout<<dist[i]<<" ";
}
int main() {
  
   int u,v,w;
   int edges;
   cin>>edges;
   
   for(int i=0; i<edges; i++){
       cin>>u>>v>>w;
       /*adj matrix
       adj_mat[u][v] = 1;
       adj_mat[v][u] = 1;
       */
       
       adj_list[u].push_back({v,w});
       adj_list[v].push_back({u,w});
   }
   
   //bfs(1);
   //shortest_distance(1);
   dijkstra(1);
   
   
}