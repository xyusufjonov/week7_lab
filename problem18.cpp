 #include<iostream>
#include<cmath>
using namespace std;
double pi=3.1415;
double e=2.7182;
double seriesA(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + pi*pow(2, -i);
    }
    return sum;
}
double seriesB(int n) {
    double product = 1;
    for (int i = 1; i <= n; i++) {
        product = product * pi/2*pow(i, e);
    }
    return product;
};
double seriesC(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + pow(-2,i)/(2*pi+i);
    }
    return sum;
};
double seriesD(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + 2*i*pi/(pow(e, i));
    }
    return sqrt(sum);
};

int main()
{
    return 0;
}