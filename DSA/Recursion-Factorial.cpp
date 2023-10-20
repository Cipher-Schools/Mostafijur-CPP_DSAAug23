#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    
    if(n==0)
    return 1;
    
    int res = fact(n-1);
    
    return res*n;
}
int main() {
	
	cout<<fact(5)<<"\n";
    
}