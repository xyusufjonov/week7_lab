#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int count = 0, num = 2;
    cout << "First 25 Additive Prime Numbers:\n" << endl;
    while (count < 25) {
        if (isPrime(num) && isPrime(digitSum(num))) {
            cout << setw(6) << num;
            count++;
            if (count % 5 == 0) cout << endl;
        }
        num++;
    }
    return 0;
}
