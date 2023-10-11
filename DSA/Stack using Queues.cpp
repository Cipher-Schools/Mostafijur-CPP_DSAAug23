#include <bits/stdc++.h>
using namespace std;

void pop(queue<int> &q1, queue<int> &q2, int &q_no){
    
    if(q1.empty() && q2.empty())
    {
        cout<<"Underflow"<<"\n";
        return;
    }
    
    if(q1.size() > 0){
        
        while(q1.size() > 1){
        
        q2.push(q1.front());
        q1.pop();
        }
        
        cout<<"Popped out element from q1 is "<<q1.front()<<"\n";
        q1.pop();
        
        q_no = 2;
    }
    
    else{
        
        while(q2.size() > 1){
        
        q1.push(q2.front());
        q2.pop();
        }
        
        cout<<"Popped out element from q2 is "<<q2.front()<<"\n";
        q2.pop();
        
        q_no = 1;
    }
    
}
void push(queue<int> &q1, queue<int> &q2, int &q_no, int data){
    
    if(q_no == 1)
    q1.push(data);
    
    else
    q2.push(data);
}
int main() {
	
    queue<int> q1,q2;
    int q_no = 1;
    
    push(q1, q2, q_no, 1);
    push(q1, q2, q_no, 2);
    push(q1, q2, q_no, 3);
    pop(q1,q2,q_no);
    pop(q1,q2,q_no);
	
	return 0;
}