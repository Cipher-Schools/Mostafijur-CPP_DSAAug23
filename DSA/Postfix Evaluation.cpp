#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string postfix= "12+34*-";
	
	stack<int> stk;
	
	for(int i = 0; i<postfix.length(); i++){
	    
	    char ch = postfix[i];
	    
	    if(isdigit(ch)){
	        int d = int(ch - '0');
	        stk.push(d);
	    }
	    
	    else{
	        int num2 = stk.top();
	        stk.pop();
	        int num1 = stk.top();
	        stk.pop();
	        
	        int res;
	        
	        if(postfix[i] == '*')
	        res = num1*num2;
	        
	        else if(postfix[i] == '/')
	        res = num1/num2;
	        
	        else if(postfix[i] == '-')
	        res = num1-num2;
	        
	        else if(postfix[i] == '+')
	        res = num1+num2;
	        
	        stk.push(res);
	    }
	    
	}
	
	cout<<stk.top()<<"\n";
	return 0;
}