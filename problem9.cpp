#include <iostream>
using namespace std;
float plus(float a, float b) {
    return a + b;
}
float minus(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    return a / b;
}
int main() {
    float a, b;
    char operation;
    cin >> a >> b;
    cout << "Choose the operation: (+ / * -):    ";
    cin >> operation;
    switch (static_cast<int>(operation)) {
        case 43:
            cout << plus(a, b) << endl;
            break;
            case 45:
            cout << minus(a, b) << endl;
            break;
            case 42:
            cout << multiply(a, b) << endl;
            break;
            case 47:
            cout << divide(a, b) << endl;
            break;
            default:
            cout << operation << endl;
    }



}