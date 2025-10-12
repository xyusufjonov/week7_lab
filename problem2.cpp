#include <iostream>
using namespace std;
float acceleration(float v1, float v2, float t) {
    return (v1-v2)/t;
}
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    cout << acceleration(a, b, c) << endl;

}