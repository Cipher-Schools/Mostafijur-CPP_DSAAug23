#include <bits/stdc++.h>
using namespace std;


int main() {
	
    string s = "()()))";
    stack<char> stk;
    bool is_balanced = true;
    
    for(int i=0; i<s.length(); i++){
        
        if(s[i] == '('){
            stk.push(s[i]);
        }
        
        // if closing bracket
        else{
            
            // if no opening brackets then unbalanced
            if(stk.empty()){
                is_balanced = false;
                break;
            }
            
            // else pop the most recent opening bracket
            else{
                stk.pop();
            }
        }
    }
    
    // if after all possible pop ops 
    // still some unbalanced opening brackets
    if(!stk.empty()){
        is_balanced = false;
    }
    
    if(!is_balanced){
        cout<<"Not Balanced"<<"\n";
    }
    else{
        cout<<"Balanced"<<"\n";
    }
    
	
	return 0;
}