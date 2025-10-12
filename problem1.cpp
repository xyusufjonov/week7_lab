#include <iostream>
using namespace std;
float product(float n, float p) {
    return n * p;
}
int main() {
    int n, p;
    cin >> n >> p;
    cout << product(n, p) << endl;
}