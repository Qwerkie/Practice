#include <iostream>
#include <fstream>

using namespace std;

int main(){
	fstream File;
	File.open("input.txt");
	int n, total = 0;
	if(File){
		while(File >> n)
			total += n;
	}
	cout << total << endl;
}