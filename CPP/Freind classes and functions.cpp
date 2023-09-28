#include <bits/stdc++.h>
using namespace std;

class A;

class B{
    
    public :
    
    /*
    void access(A obj){
        cout<<obj.data<<"\n";
    }*/
    
    void access2(A obj);
};

class A{
    
    int data;

    public:
    
    A(){
        this->data = 10;
    }
    
    
    int get(){
        return this->data;
    }
    
    //friend class B;
    
    friend void global_access(A obj);
    friend void B :: access2(A obj);
    
};

void B::access2(A obj){
    cout<<obj.data<<"\n";
}

// global friend variable
void global_access(A obj){
    
    cout<<"Inside global friend method"<<"\n";
    cout<<obj.data<<"\n";
}

int main() {
    
  A obj;
  B objb;
  //objb.access(obj);
  //global_access(obj);
  objb.access2(obj);
  //cout<<obj.get()<<"\n";

}