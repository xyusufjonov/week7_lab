#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int count = 0, num = 2;
    cout << "First 100 Emirp Numbers:\n" << endl;
    while (count < 100) {
        int rev = reverseNumber(num);
        if (isPrime(num) && isPrime(rev) && num != rev) {
            cout << setw(6) << num;
            count++;
            if (count % 10 == 0)
                cout << endl;
        }
        num++;
    }
    return 0;
}
