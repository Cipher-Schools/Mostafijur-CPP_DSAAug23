#include <bits/stdc++.h>
using namespace std;

class bankAccount{
    
    public :
    
    static string bankName;
    int accNumber = 0;
    string name;
    
    void f(); // declare inside the class
    
    void setAccNumber(int accNumber){
        
        this->accNumber = accNumber;
    }
    
    static void setBankName(string bankName){
        
        bankAccount :: bankName = bankName;
    }
};

// implement outside of class
void bankAccount :: f(){
    cout<<"Inside function f"<<"\n";
}
string bankAccount :: bankName = "SBI";

int main() {
    
	bankAccount obj;
	obj.f();
	cout<<obj.accNumber<<"\n";
	obj.setAccNumber(1);
	
	bankAccount obj2;
	bankAccount :: setBankName("Axis Bank");
	
	
	cout<<obj.accNumber<<" "<<bankAccount::bankName<<"\n";
	
	

}