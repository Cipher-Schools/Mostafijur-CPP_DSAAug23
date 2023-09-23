#include <bits/stdc++.h>
using namespace std;

class bankAccount{
    
    public :
    
    int accNumber;
    string name;
    
    // constructor overloading
    bankAccount(){
        this->accNumber = 0;
        this->name = "";
    }
    
    bankAccount(int accNumber, string name){
        this->accNumber = accNumber;
        this->name = name;
    }
    
    //method overloading
    void setAccNumber(){
        this->accNumber = -1;
    }
    
    void setAccNumber(int accNumber){
        this->accNumber = accNumber;
    }
    
    //method overloading
    void f(float a, float b){
        cout<<"Inside float function f"<<"\n";
        cout<<a+b<<"\n";
    }
    
    void f(double a, double b){
        cout<<"Inside double function f"<<"\n";
        cout<<a+b<<"\n";
    }
};

int main() {
    
	bankAccount obj(1, "Aniket");
	bankAccount obj2;
	
	//obj2.setAccNumber();
	//obj2.setAccNumber(5); 
	obj2.f(1.0, (float)2.53); // error while calling function
	cout<<obj.accNumber<<" "<<obj.name<<"\n";
	cout<<obj2.accNumber<<" "<<obj2.name<<"\n";

}