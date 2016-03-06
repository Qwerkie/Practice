#include <iostream>

using namespace std;

int main(){
	int a[10] = {5, 8, 15, 74, 72, 1, 64, 100, 63, 400};
	int max = 0;
	for(int i = 0; i < 10; i++){
		if(max < a[i])
			max = a[i];
	}
	cout << max << endl;
}