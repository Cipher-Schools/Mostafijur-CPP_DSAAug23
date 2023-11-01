#include <bits/stdc++.h>
using namespace std;

//resolving diamond problem
class A{
    
    public : 
    int a = 10;
};

class B : virtual public A{
    
    public : 
    int b = 5;
};

class C : public virtual A{
    
    public : 
    int c = 6;
};

class D: public B, public C{
    
    public :
    int d = 15;
};

int main() {
    
  D obj;
  
  cout<<obj.a<<" "<<obj.b<<" "<<obj.c<<" "<<obj.d<<"\n";
}