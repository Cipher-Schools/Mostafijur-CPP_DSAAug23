#include <bits/stdc++.h>
using namespace std;

//call by reference, a,b are the aliases of main function's a and b
void swap2(int&a, int&b){
    
    int temp = a;
    a = b;
    b = temp;
}
// call by value

void swap1(int a, int b){
    
    int temp = a;
    a = b;
    b = temp;
}

int main() {
	
     int a = 5, b = 7;
     swap1(a,b);
     
     cout<<a<<" "<<b<<"\n"; // no change
     
     swap2(a,b);
     
     cout<<a<<" "<<b<<"\n"; // change will be there
     
	
	return 0;
}