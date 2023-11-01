#include <bits/stdc++.h>
#include <fstream>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*
	fstream f1,f2;
	
	f1.open("source.txt", ios::in ); // reading file
	f2.open("dest.txt", ios::app); //writing file
	
	string s;
	
	while(getline(f1, s)){
		
		f2<<s;
		f2<<"\n";
		cout<<f2.tellp()<<"\n";
	}
	
	cout<<f2.tellg()<<"\n";
	while(f1.good()){
	    f1>>s;
	    f2<<s;
	}
	f1.close();
	f2.close();
	
	*/
	
	/*
	ifstream fin;
	fin.open("source.txt");
	
	ofstream fout("des.txt", ios::app);
	//fout.open("dest.txt");
	
	fout<<"New content added";
	fout<<" Another content added";
	
	fout.seekp(0);
	
	fout<<"Content 3 added"<<"\n";
	
	//take fout at the end of file and write something there
	fout.seekp(0, ios::end);
    
	fout<<"content 4 added"<<"\n"	;
	
	fout.seekp(2, ios::beg);
	
	fout<<" Inserted new content"<<"\n";
	
	//from the end move by 5 positions and insert data there
	
	fout.seekp(5, ios::end);
	fout<<"Some content entered"<<"\n";
	
	*/
	
	vector<string> sentences = {
        "This is the first sentence.",
        "Here's another one.",
        "This is the last sentence in the set."
    };
    
    
	ofstream file("new_file.bin", ios::binary);
	
	for(int i=0; i<sentences.size(); i++){
		
		string curr = sentences[i];
		
		//file << curr;
		file.write(curr.c_str(), curr.length());
	}
	
	file.close();
	
	vector<string> read_sentences;
	
	ifstream f("new_file.bin", ios::binary); //app, trunc, seekp seekg, tellp, tellg
	
	string s;
	char arr[30];
	
	while(f.read(arr, sizeof(arr))){
		
		for(int i=0;i<30; i++){
			cout<<arr[i];
		}
		
		cout<<"\n";
	}
	
	for(int i=0; i<f.gcount();i++)
	cout<<arr[i]<<" ";
	/*
	for(int i=0; i<read_sentences.size(); i++){
		cout<<read_sentences[i]<<"\n";
	}*/
	
   
	
	
}