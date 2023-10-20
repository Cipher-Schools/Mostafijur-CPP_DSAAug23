#include <bits/stdc++.h>
using namespace std;

int arr[] = {5,4,9,2,6,1};
int n = 6;

void merge(int st, int mid, int en){
    
    int merged_arr[en-st+1];
    
    int i=st;
    int j = mid+1;
    int k=0;
    
    while(i<=mid && j<=en){
        
        if(arr[i] <= arr[j]){
            merged_arr[k++] = arr[i++];
        }
        else{
            merged_arr[k++] = arr[j++];
        }
        
    }
    
    while(i<=mid){
        merged_arr[k++] = arr[i++];
    }
    
    while(j<=en){
        merged_arr[k++] = arr[j++];
    }
    
    for(i=0; i<en-st+1; i++){
        arr[st+i] = merged_arr[i];
    }
    
}

void merge_sort(int st, int en){
    
    if(st >= en)
    return;
    
    int mid = (st+en)/2;
    
    merge_sort(st, mid);
    merge_sort(mid+1, en);
    
    merge(st, mid, en);
}

int main() {
	
  merge_sort(0,n-1);
  
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
    
}