#include <bits/stdc++.h>
using namespace std;

int arr[] = {5,2,3,4,9,8,10,12,11};

void heapify(int idx, int n){
    
    int node = arr[idx];
    int lc = -1;
    int rc = -1;
    int greatest = node;
    
    if(2*idx + 1 < n){
        greatest = max(greatest, arr[2*idx + 1]);
        lc = 2*idx + 1;
    }
    
    if(2*idx + 2 < n){
        greatest = max(greatest, arr[2*idx + 2]);
        rc = 2*idx + 2;
    }
    
    if(greatest != node){
        
        if(arr[lc] == greatest){
            swap(arr[lc], arr[idx]);
            heapify(lc, n);
        }
        
        else{
            swap(arr[rc], arr[idx]);
            heapify(rc, n);
        }
    }
    
}

void heapSort(int n){

   // nlogn for initial heapify      
  for(int i = (n/2-1); i>=0; i--){
      heapify(i,n);
  }
  
  swap(arr[0], arr[n-1]);
  
  for(int i=1; i<n-1; i++){
      
      heapify(0, n-i);
      
      swap(arr[0], arr[n-i-1]);
  }
  
    
}
int main() {
  
  int n = 9;
  heapSort(n);	
  
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
}