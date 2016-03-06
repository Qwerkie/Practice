#include <iostream>
#include <string>
#include <fstream>

using namespace std;

static int length = 100;

void reverse(string s){
	char c[length];
	char temp;
	strcpy(c, s.c_str());
	
	for(int i = 0; i<s.length()/2; i++){
		temp = c[i];
		c[i] = c[s.length() - i - 1];
		c[s.length() - i - 1] = temp;
	}
	s = string(c);
	cout << s << " ";
}

int main(){
	fstream File;
	string s;
	File.open("input.txt");
	if(File){
		while(File >> s){
			reverse(s);
		}
	}
	cout << endl;
	
}