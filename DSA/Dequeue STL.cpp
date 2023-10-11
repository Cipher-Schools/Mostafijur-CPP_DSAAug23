#include <bits/stdc++.h>
using namespace std;

int main() {
	
    
    deque<int> dq;
    
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    
    //dq.pop_back();
    //cout<<dq.back()<<"\n";
    dq.pop_front();
    cout<<dq.front()<<"\n";
    
    
}