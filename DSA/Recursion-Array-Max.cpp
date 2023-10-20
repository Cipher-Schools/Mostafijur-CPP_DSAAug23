#include <bits/stdc++.h>
using namespace std;

int arr_max(int arr[], int n){
    
    if(n==0)
    return INT_MIN;
    
    return max(arr_max(arr, n-1), arr[n-1]);
}
int main() {
	
	int arr[] = {1,5,2,3,9,6};
	
	cout<<arr_max(arr, 6)<<"\n";
    
}