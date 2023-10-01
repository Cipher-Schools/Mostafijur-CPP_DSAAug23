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

Node* pop(Node* top, int& curr_size){
    
    if(top == NULL){
        cout<<"Underflow"<<"\n";
        return top;
    }
    
    Node* ptr = top;
    top = top->next;
    delete(ptr);
    curr_size--;
    
    return top;
}
Node* push(Node* top, int data, int &curr_size, int capacity){
    
    if(curr_size == capacity){
        cout<<"Overflow"<<"\n";
        return top;
    }
    
    Node* n = new Node(data);
    
    if(top == NULL){
        top = n;
        curr_size++;
        return top;
        
    }
    
    n->next = top;
    top = n;
    curr_size++;
    
    return top;
}

int main() {
	
	Node* top = NULL;
	
	int capacity = 5;
	int curr_size = 0;
	
	top = push(top, 1, curr_size, capacity);
	cout<<curr_size<<"\n";
	
	top = push(top, 3, curr_size, capacity);
	cout<<curr_size<<"\n";
	
	top = push(top, 2, curr_size, capacity);
	cout<<curr_size<<"\n";
	
	top = push(top, 5, curr_size, capacity);
	cout<<curr_size<<"\n";
	
	top = push(top, 4, curr_size, capacity);
	cout<<curr_size<<"\n";
	
	/*
	top = push(top, 6, curr_size, capacity);
	cout<<curr_size<<"\n";
	*/
	
	top = pop(top, curr_size);
	cout<<curr_size<<"\n";
	
	cout<<"\n";
	
	Node* temp = top;
	
	while(temp != NULL){
	    cout<<temp->data<<"\n";
	    temp = temp->next;
	}
	
	return 0;
}