#include <bits/stdc++.h>
using namespace std;

// implement stack using linked list or array

int main() {
	
    stack<int> stk;
    
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    
    stk.pop();
    
    while(!stk.empty()){
        cout<<stk.top()<<"\n";
        stk.pop();
    }
	
	return 0;
}