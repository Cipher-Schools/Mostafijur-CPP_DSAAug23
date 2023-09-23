#include <bits/stdc++.h>
using namespace std;

class bankAccount{
    
    // private data leads to data hiding
    
    int accNumber;
    string name;
    int balance;
    
    // private method
    void f(){
        cout<<this->name<<"\n";
    }
    
    public :


    bankAccount(){
        this->accNumber = 10;
        this->name = "";
        this->balance = 0;
    }
    
    //copy constructor
    bankAccount(const bankAccount &obj){
    
        this->accNumber = obj.accNumber;
        this->name = obj.name;
        this->balance = obj.balance;
    }
    
    // public getters and setters to interact with private data
    void setAccNumber(int accNumber){
        this->accNumber = accNumber;
    }
    
    int getAccNumber(){
        return this->accNumber;
    }
    
    // Binary operator overloading
    void operator +(int balance){
        
        this->balance += balance;
    }
    
    // unary operator overloading (prefix)
    void operator++(){
        this->accNumber += 1;
    }
    
    // unary operator overloading (postfix)
    void operator++(int){
        cout<<"Inside post incremenet"<<"\n";
        this->accNumber += 1;
    }
    
    /* cant be overlaoded based on return type
    int f(){
        this->f(); // recursive call if only single f() resides
        
        return 1;
    }
    */
};

int main() {
    
    bankAccount obj;
    obj+10;
    obj++;
    
    bankAccount objC(obj);
    
    obj.f();
    cout<<obj.getAccNumber()<<"\n";
    //cout<<objC.balance<<" "<<objC.accNumber<<"\n";

}