#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string prefix = "+1*2-*342";
	
	stack<int> stk;
	
	for(int i = prefix.length()-1; i>=0; i--){
	    
	    char ch = prefix[i];
	    
	    if(isdigit(ch)){
	        int d = int(ch - '0');
	        stk.push(d);
	    }
	    
	    else{
	        int num1 = stk.top();
	        stk.pop();
	        int num2 = stk.top();
	        stk.pop();
	        
	        int res;
	        
	        if(prefix[i] == '*')
	        res = num1*num2;
	        
	        else if(prefix[i] == '/')
	        res = num1/num2;
	        
	        else if(prefix[i] == '-')
	        res = num1-num2;
	        
	        else if(prefix[i] == '+')
	        res = num1+num2;
	        
	        stk.push(res);
	    }
	    
	}
	
	cout<<stk.top()<<"\n";
	return 0;
}