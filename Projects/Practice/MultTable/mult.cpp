#include <iostream>

using namespace std;

static int maxn = 12;

int main(){
	for(int i = 1; i <= maxn; i ++){
		for(int j = 1; j <= maxn; j++)
			cout << i * j << '\t';
		cout << endl;
	}
}