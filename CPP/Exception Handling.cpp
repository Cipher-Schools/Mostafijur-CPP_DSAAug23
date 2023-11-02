#include <bits/stdc++.h>
using namespace std;

int arr[] = {5,6,7,8,9};
int n = 5;

int f(int idx){
    
    if(idx >= n)
    throw out_of_range("index value beyond the range");
    
    if(idx < 0)
    throw idx;
    
    return arr[idx];
    
}

void met(int* ptr){
    
    if(ptr == NULL){
        throw ptr;
    }
    
    cout<<*ptr<<"\n";
}
int main(){
    
    
    int a,b;
    cin>>a>>b;
    
    try{
        int* ptr = NULL;
        met(ptr);
    }
    catch(int* ptr){
        cout<<"Execption has occurred bcoz of NULL pointer";
    }
    /*
    try{
        int val = f(-1);
    }
    catch(exception& e){
        cout<<"An exception has occurred"<<" "<<e.what()<<"\n";
    }
    catch(int idx){
        cout<<"An exception has occurred "<<idx<<"\n";
    }*/
    /*
    try{
        if(b==0)
        throw runtime_error("Division by 0 is not possible");
        
        if(b<0)
        throw b;
        
        cout<<a/b<<"\n";

    }
    catch(exception& e){
        cout<<"An exception has occurred"<<" "<<e.what()<<"\n";
    }
    catch(int b){
        cout<<"Division by negative numbers not allowed"<<" "<<b<<"\n";
    }
    */
    
}