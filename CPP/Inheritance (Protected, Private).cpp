#include <bits/stdc++.h>
using namespace std;


/* All public and protected members of base class becomes protected by protected mode of inheritance.
   All public and protected members of base data becomes private by private mode of inheritance.
*/

/*
  Private data members of base class do get inherited but they can't be accessed inside child class or by child class object
*/

class A{
    
    public:
    
    int num;
    
    A(int num){
        this->num = num;
    }
};


class B {
    
    char ch2;
    
    public:
        
    char ch;
    
    B(char ch){
        this->ch = ch;
        this->ch2 = ch;
    }
    
};

class C : protected A, private B{
    
    public:
    	
    // If constructor of base class is not default, manual calling to the constructor has to be made
    
    C(int num, char ch) : A(num), B(ch){
        cout<<"Inside constructor of C"<<"\n";
    }
    
    void accNum(){
        cout<<this->num<<"\n";
    }
    
    /*
    void accChar1(){
        cout<<this->ch<<"\n";
    }*/
    
    void accChar2(){
        cout<<this->ch2<<"\n";
    }
    
};

int main() {
	
	C obj(1, 'c');
	
	//obj.accNum();
	obj.accChar2();
	
	//cout<<obj.num<<" "<<obj.ch<<"\n";

}