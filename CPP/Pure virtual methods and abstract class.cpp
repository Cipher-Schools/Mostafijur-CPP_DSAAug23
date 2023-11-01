#include <bits/stdc++.h>
using namespace std;

// abstract class, can't be instantiated
class A{
    
    public : 
    
    void show(){
        cout<<"Inside class A"<<"\n";
    }
    
    virtual void print() = 0; // pure virtual method
};

class C : public A{
    public:
    
    void show(){
        cout<<"Inside class C"<<"\n";
    }
    
    // If not overriden, C will also be abstract
    void print(){
        cout<<"Inside class C"<<"\n";
    }
};

int main() {
    
  C objC;
  
  // decided in compile time
  //objB.show();
  //objC.show();
  
  A* base = &objC;
  base->show() // compile time bind
  base->print(); // runtime bind
  
  
}