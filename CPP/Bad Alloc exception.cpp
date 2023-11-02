#include <bits/stdc++.h>
using namespace std;

class C{
    
    public :
    int val;
};

int main(){
    
    C* obj = NULL;
    
    //cout<<obj->val<<"\n"; // NULL Pointer exception
    
    try{
        int* arr = new int[10000000000000];
    }
    catch(bad_alloc& exc){
        cout<<"An exception has occurred "<<exc.what()<<"\n";
    }
    
    
}