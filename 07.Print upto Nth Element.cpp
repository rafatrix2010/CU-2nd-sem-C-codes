#include <iostream>
using namespace std;

int fib(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fib(n-1) + fib(n-2);
}

int main(){
	int n;
	cout << "Enter the Limit: ";
	cin >> n;
	
	int arr[n], arr1[100];
	for(int i = 0; i < n; i++) {
		arr[i] = fib(i);
	}
	int value = arr[n-1];
	for(int i = 0; i <= value; i++) {
		arr1[i] = i;
	}
	
	
	return 0;
}