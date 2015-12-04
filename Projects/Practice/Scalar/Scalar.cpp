#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
const int MAXN=100;

int x[MAXN], y[MAXN];

int main(){
	fstream FILE;
	FILE.open("input.txt");
	if(FILE){
		int T; // Number of test cases
		FILE >> T;
		int j = 0;
		for(int i = 1; i<=T; i++){
			int n, total = 0;
			FILE >> n; // Number of numbers in each vector
       		for (int i = 0; i < n; i++)
        	   FILE >> x[i];

      		for (int i = 0; i < n; i++)
        	   FILE >> y[i];
			  
			sort(x, x+n);
			sort(y, y+n);
			
			for(int i = 0; i < n; i++){
				//cout << x[i] << "*" << y[n-i-1] << endl;
				total += (x[i] * y[n - i - 1]);
			}
			cout << "Case: #" << i << " " << total << endl;
		}
	}
	cout << endl;
	return 0;
}