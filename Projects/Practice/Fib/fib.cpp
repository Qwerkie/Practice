#include <iostream>

using namespace std;

int fib(int n){
	return n<=1 ? n: fib(n-1) + fib(n-2);
}

int main(){
	for(int i = 0; i < 10; i++)
		cout << fib(i) << ", ";
	cout << fib(10) << endl;
}