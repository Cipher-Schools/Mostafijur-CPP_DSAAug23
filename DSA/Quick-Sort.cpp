#include <bits/stdc++.h>
using namespace std;

int arr[] = {5,4,9,1,1,1};
int n = 6;

int partition(int st, int en){
    
    int piv = arr[st];
    int count = 0;
    
    for(int i=st+1; i<=en; i++){
        if(arr[i] < piv)
        count++;
    }
    
    swap(arr[st], arr[st+count]);
    
    int pos = st+count;
    
    int i=st;
    int j=pos+1;
    
    while(i<pos && j<=en){
        
        if(arr[i] < piv)
        i++;
        
        else if(arr[j] >= piv)
        j++;
        
        else{
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
    
    return pos;
}

void quickSort(int st, int en){
    
    if(st >= en)
    return;
    
    int pos = partition(st,en);
    
    quickSort(st, pos-1);
    quickSort(pos+1, en);
    
    
}

int main() {
	
  quickSort(0,n-1);
  
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
    
}