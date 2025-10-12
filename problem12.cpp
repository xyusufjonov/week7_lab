#include <iostream>
#include <vector>
using namespace std;
int cubeOfDigits(int n){
    vector<int>v;
    while(n>0) {
        v.push_back(n%10);

        n = n/10;
    }

    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum = (v[i]*v[i]*v[i])+sum;
    }
    return sum;

}
void isArmstrong(int n) {
    if (n == cubeOfDigits(n)) {
        cout << "Armstrong number is " << n << endl;
    }else
        cout << "Not an armstrong number" << endl;
}
int main() {
    int n;
    cin >> n;
    isArmstrong(n);

}