#include <bits/stdc++.h>
using namespace std;

//base class
class vehicle{
    
    public : 
    
    int wheels;
    bool engine;
    vehicle(){
        cout<<"Inside vehicle constructor"<<"\n";
    }
    
    ~vehicle(){
        cout<<"Inside vehicle destructor"<<"\n";
    }
    
};

//child class
class cycle : public vehicle{
    
    public : 
    int capacity;
    
    cycle(int capacity){
        
        this->wheels = 2;
        this->engine = false;
        this->capacity = capacity;
        
        cout<<"inside cycle constructor"<<"\n";
    }
    
    ~cycle(){
        cout<<"Inside cycle destructor"<<"\n";
    }
};

int main() {
	
     cycle c(2);
     
    // cout<<c.engine<<" "<<c.wheels<<" "<<c.capacity<<"\n";
	
	return 0;
}