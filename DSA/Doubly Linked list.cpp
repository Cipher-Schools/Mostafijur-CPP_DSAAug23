#include <bits/stdc++.h>
using namespace std;
class node{
    
    public : 
    
    int data;
    node* next;
    node* prev;
    
    node(int data){
        
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

node* insert(node* head, int data, int k){
    
    node* n = new node(data);
    
    if(head == NULL){
        head = n;
        return head;
    }
    
    if(k == 0){
        n->next = head;
        head->prev = n;
        head = n;
        
        return head;
    }
    
    node* temp = head;
    int pos = 0;
    
    while(pos != k-1){
        
        temp = temp->next;
        pos++;
    }
    
    n->next = temp->next;
    
    if(temp->next != NULL)
    temp->next->prev = n;
    
    temp->next = n;
    n->prev = temp;
    
    return head;
}

node* del(node* head, int k){
    
    if(k==0){
        
        node* ptr = head;
        head = head->next;
        
        if(head != NULL)
        head->prev = NULL;
        
        delete ptr;
        
        return head;
    }
    
    node* temp = head;
    int pos = 0;
    
    while(pos != k-1){
        temp = temp->next;
        pos++;
    }
    
    node* ptr = temp->next;
    temp->next = temp->next->next;
    
    if(temp->next != NULL)
    temp->next->prev = temp;
    
    delete ptr;
    
    return head;
}
int main(){
    
    node* head = NULL;
    
    head = insert(head,1,0);
    head = insert(head,2,1);
    head = insert(head,3,2);
    head = insert(head,4,1); // 1 4 2 3
    head = insert(head,5,2);// 1 4 5 2 3
    head = del(head, 1); // 1 5 2 3
    //head = del(head, 0);
    head = del(head, 3);
    
    node* temp = head;
    
    while(temp != NULL){
        
        cout<<temp->data<<"\n";
        temp = temp->next;
        
    }
    
    cout<<"\n";
    
    temp = head;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    while(temp!= NULL){
        cout<<temp->data<<"\n";
        temp = temp->prev;
    }
    
    
    
}