#include <iostream>
using namespace std;
void fun(float radius) {
    cout<<"Area of circle: "<<radius*radius*3.1415<<endl;
    cout << "Circumference: "<<radius*2*3.1415<<endl;
}
void fun(float a, float b) {
    int area = a*b;
    int perim = 2*(a+b);
    cout<<"Area of rectangle: "<<area<<endl;
    cout<<"Perimeter: "<<perim<<endl;
}
int main() {
    int n;
    fun(n);

}