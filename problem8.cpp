#include <iostream>
using namespace std;
int max(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }else if (b > a && b > c) {
        return b;
    }else if (c > a && c > b) {
        return c;
    }
}
int min(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    }else if (b < a && b < c) {
        return b;
    }else if (c < a && c < b) {
        return c;
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c) << endl;
    cout << min(a, b, c) << endl;

}