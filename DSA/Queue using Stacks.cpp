#include <bits/stdc++.h>
using namespace std;

void dequeue(stack<int> &s1, stack<int> &s2){
    
    if(s2.empty() && s1.empty()){
        cout<<"Underflow"<<"\n";
        return;
    }
    
    if(s2.empty()){
        
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    cout<<"The popped out data is "<<s2.top()<<"\n";
    s2.pop();
    
}
void enqueue(stack<int> &s1, int data){
    
    s1.push(data);
}

int main() {
	
    stack<int> s1,s2;
    
    enqueue(s1, 1);
    enqueue(s1, 2);
    enqueue(s1, 3);
    enqueue(s1, 4);
    
    dequeue(s1,s2);
    dequeue(s1,s2);
    dequeue(s1,s2);
    
	
	return 0;
}