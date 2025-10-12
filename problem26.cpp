#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int bin2Octal(int binary) {
    int decimal = 0, octal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    int place = 1;
    while (decimal > 0) {
        int rem = decimal % 8;
        octal += rem * place;
        decimal /= 8;
        place *= 10;
    }
    return octal;
}

int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr;

    int binary = stoi(binaryStr);
    int octal = bin2Octal(binary);

    cout << "The corresponding octal value is: " << octal << endl;
    return 0;
}
