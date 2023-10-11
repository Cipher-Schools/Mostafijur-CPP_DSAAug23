#include <bits/stdc++.h>
using namespace std;

class Node{
    
    public : 
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void dequeue(Node** REAR, Node** FRONT){
    
    if(*FRONT == NULL){
        cout<<"Underflow"<<"\n";
        return;
    }
    
    if(*REAR == *FRONT){
        *FRONT = NULL;
        *REAR = NULL;
        
        return;
    }
    
    Node* ptr = *FRONT;
    
    *FRONT = (*FRONT)->next;
    
    delete(ptr);
    
   
}
void enqueue(Node** REAR, Node** FRONT, int data){
    
    Node* n = new Node(data);
    
    if(*REAR == NULL){
        *REAR = n;
        *FRONT = n;
        
        return;
    }
    
    (*REAR)->next = n;
    *REAR = n;

}

int main() {
    
    Node* REAR = NULL;
    Node* FRONT = NULL;
    
    enqueue(&REAR, &FRONT, 1);
    enqueue(&REAR, &FRONT, 3);
    enqueue(&REAR, &FRONT, 4);
    dequeue(&REAR, &FRONT);
    
    Node* temp = FRONT;
    
    while(temp != NULL){
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
	
	return 0;
}