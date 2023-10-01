#include <bits/stdc++.h>
using namespace std;

//pop
int pop(int stk[], int &top){
    
    if(top == -1){
        cout<<"Underflow"<<"\n";
        return -1;
    }
    
    int top_data = stk[top];
    top--;
    
    return top_data;
}
void push(int stk[], int data, int &top, int n){
    
    if(top == n-1){
        cout<<"Overflow"<<"\n";
        return;
    }
    
    top++;
    stk[top] = data;
}
int main() {
	
	int n = 5;
	int stk[n];
	int top = -1;
	
	push(stk,1,top,n);
	push(stk,2,top,n);
	pop(stk,top);
	
	for(int i=0;i<=top;i++)
	cout<<stk[i]<<"\n";
	
	return 0;
}