#include <bits/stdc++.h>
using namespace std;

int priority(char op){
    
    if(op == '*' || op == '/'){
        return 2;
    }
    
    else if(op == '+' || op=='-')
    return 1;
}

int main() {
	
	string infix;
	cin>>infix;
	
	string infix2;
	//reverse a string
	
	for(int i=infix.length()-1; i>=0; i--){
	    
	    if(infix[i] == '(')
	    infix2.push_back(')');
	    
	    else if(infix[i] == ')')
	    infix2.push_back('(');
	    
	    else
	    infix2.push_back(infix[i]);
	}
	
	cout<<infix2<<"\n";
	
	string postfix = "";
	
    stack<char> stk;
    
    for(int i=0; i<infix2.length(); i++){
        
        if(isalpha(infix2[i]) || isdigit(infix2[i]))
        postfix.push_back(infix2[i]);
        
        else if(infix2[i] == '(')
        stk.push(infix2[i]);
        
        else if(infix2[i] == ')'){
            
            while(stk.top() != '('){
                char op = stk.top();
                //cout<<op<<"\n";
                stk.pop();
                //infix.push_back(op) -- mistaken line
                postfix.push_back(op); // corrected line
            }
            
            stk.pop();
            
        }
        else{
            
            //curr operator's priority
            int pri = priority(infix2[i]);
            
            // pop all more priority ops from the stack that are at top
            
            while(!stk.empty() && stk.top() != '(' && priority(stk.top()) > pri ){
                char op = stk.top();
                stk.pop();
                //cout<<op<<"\n";
                postfix.push_back(op);
            }
            
            stk.push(infix2[i]);
        }
    }
    
    
    while(!stk.empty()){
        char op = stk.top();
        stk.pop();
        postfix.push_back(op);
    }
    
    reverse(postfix.begin(), postfix.end());
    
    //prefix 
    cout<<postfix<<"\n";
	
	return 0;
}