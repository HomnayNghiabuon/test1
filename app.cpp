#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Nhap mot so: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " la so nguyen to.\n";
    else
        cout << num << " khong phai la so nguyen to.\n";

    return 0;
}
