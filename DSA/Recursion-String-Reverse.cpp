#include <bits/stdc++.h>
using namespace std;

string rev_str(string s, int n){
    
    if(n==0)
    return "";
    
    return s[n-1] + rev_str(s, n-1);
    
    
}
int main() {
	
   cout<<rev_str("abcd", 4);
    
}