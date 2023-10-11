#include <bits/stdc++.h>
using namespace std;

void dequeue(int queue[], int &front, int &rear, int n){
    
    if(front == -1 && rear == -1){
        cout<<"underflow"<<"\n";
        return;
    }
    
    if(front == rear){
        front = -1;
        rear = -1;
        
        return;
    }
    
    front = (front+1)%n;
}
void enqueue(int queue[], int &front, int &rear, int n, int data){
    
    if(rear == -1 && front == -1){
        rear = 0;
        front = 0;
        
        queue[rear] = data;
        return;
    }
    
    if((rear+1)%n == front){
        cout<<"Overflow"<<"\n";
        return;
    }
    
    rear = (rear+1)%n;
    queue[rear] = data;
}

int main() {
    
    int queue[5];
    int n = 5;
    int front = -1;
    int rear = -1;
    
    enqueue(queue, front, rear, n, 1);
    enqueue(queue, front, rear, n, 2);
    enqueue(queue, front, rear, n, 3);
    dequeue(queue, front, rear, n);
    
    for(int i=front; i<=rear; i++)
    cout<<queue[i]<<" ";
	
	return 0;
}