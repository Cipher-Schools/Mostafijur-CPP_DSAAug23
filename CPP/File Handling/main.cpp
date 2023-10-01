#include <iostream>
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//ifstream fin;
	//cin >> var;
	/*
	
	fin.open("data.txt", ios::in);
	string s;
	char c;
	
	while(fin>>s){
	cout<<s<<"\n";
    }
    
    while(fin>>c){
    	cout<<c<<"\n";
	}
	while(!fin.eof()){
		
		getline(fin, s);
		cout<<s<<"\n";
	}
	*/
	
	/*
	ofstream fout;
	string s = "CPP Sessions at LPU";
	char c;
	
	fout.open("dat.txt", ios::out); 
	
	fout<<s;
	*/

	fstream f;
	
	f.open("data.txt");
	
	string s = "Teaching DSA at LPU";
	
	f<<s;
	
	//eof();
	//beg();
	
	f.seekg(0);
	
	while(f>>s){
		cout<<s<<"\n";
	}
		
	return 0;
}