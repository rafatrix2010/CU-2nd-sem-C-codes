#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 30) return 1;

    int arr[30];
    for (int i = 0; i < n; i++) {
        arr[i] = fib(i);
        cout << arr[i] << " ";
    }
    cout << endl;

    int value = arr[n - 1];
    if (value >= 100) return 1;

    int arr1[100];
    for (int i = 0; i <= value; i++) {
        arr1[i] = i;
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}