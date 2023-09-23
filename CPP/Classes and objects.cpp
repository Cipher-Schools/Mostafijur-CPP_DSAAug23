#include <bits/stdc++.h>
using namespace std;

class bankAccount{
    
    public :
    
    //class variable
    static string bankName; 
    
    // instance variables
    int accNumber;
    string name;
};

//Initialised outside class
string bankAccount :: bankName = "SBI";

int main() {
    
    //Access static members using class name
    cout<<bankAccount::bankName<<"\n";
    
	bankAccount obj;
	obj.accNumber = 1;
	obj.name = "Ritam Bhattacharya";
	
	//obj.accNumber = 2;
	
	cout<<obj.accNumber<<" "<<obj.name<<"\n";
	
	bankAccount obj2;
	obj2.accNumber = 2;
	obj2.name = "Aniket Hazra";
	
	cout<<obj2.accNumber<<" "<<obj2.name<<"\n";
	
	//obj.bankName = "Axis Bank";
	
	/*
	cout<<obj.bankName<<"\n";
	cout<<obj2.bankName<<"\n";
	*/

}