#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    vector<int>arr;
    vector<int>brr;
    for (int i=1; i<=a; i++) {
        if (a%i == 0) {
            arr.push_back(i);
        }
    }
    for (int i=1; i<=b; i++) {
        if (b%i == 0) {
            brr.push_back(i);
        }
    }
    int sizeA = arr.size();
    int sizeB = brr.size();
    int j;
    if (sizeA > sizeB) {
        j = sizeA;
    }else if (sizeB > sizeA) {
        j = sizeB;
    }else
        j = sizeA;
    int max=1;
    for (int i = 0; i<j; i++) {
        for (int k = 0; k<j; k++) {
            if (arr[i]==brr[k]) {
                max = arr[i];
            }
        }
    }
    return max;



}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);

}