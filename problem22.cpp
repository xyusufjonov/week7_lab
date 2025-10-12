#include <iostream>
#include <cmath>
using namespace std;
double Pi = 3.141592653589793;
double area(int n, double side) {
    return n*side*side/(4*tan(Pi/n));
}
int main() {
    int n;
    double side;
    cin >> n >> side;
    cout << area(n, side) << endl;
}