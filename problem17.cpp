#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int temp = n, reversed = 0;
    while (n>0) {
        reversed = reversed *10+n%10;
        n /= 10;
    }
    return temp == reversed;
}
int main() {
    int count = 0;
    int num = 0;
    while (count<50) {
        if (num %2==0 && isPalindrome(num)) {
            cout << num;
            count++;
            if (count%5==0) {
                cout << endl;
            }
        }
        num++;
    }
}