#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int num, year;

    // Ki?m tra s? nguyên t?
    cout << "Nhap mot so: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " la so nguyen to.\n";
    else
        cout << num << " khong phai la so nguyen to.\n";

    // Ki?m tra nam nhu?n
    cout << "Nhap mot nam: ";
    cin >> year;
    if (isLeapYear(year))
        cout << year << " la nam nhuan.\n";
    else
        cout << year << " khong phai la nam nhuan.\n";

    return 0;
}

