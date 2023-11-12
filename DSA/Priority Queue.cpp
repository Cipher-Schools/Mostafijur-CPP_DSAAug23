#include <bits/stdc++.h>
using namespace std;

int main() { 
   
  vector<int> v = {5,6,7,1,2,3};
  
  priority_queue<int> pq;
  priority_queue<int, vector<int>, greater<int>> min_heap;
  
  for(auto i : v){
      pq.push(i);
      min_heap.push(i);
  }
  
  while(!pq.empty()){
      cout<<pq.top()<<"\n";
      pq.pop();
  }
  
  cout<<"\n";
  
  while(!min_heap.empty()){
      cout<<min_heap.top()<<"\n";
      min_heap.pop();
  }
  
  
  
  
  return 0;
    
}