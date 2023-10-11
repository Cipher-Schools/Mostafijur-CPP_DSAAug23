#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string str= "abhklOP";
	
	stack<char> stk;
	
	for(int i=0; i<str.length(); i++){
	    stk.push(str[i]);
	}
	
	string rev = "";
	
	while(!stk.empty()){
	    rev.push_back(stk.top());
	    stk.pop();
	}
	
	cout<<rev<<"\n";
	return 0;
}