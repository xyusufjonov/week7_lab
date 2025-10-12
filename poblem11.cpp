#include <iostream>
#include <vector>
using namespace std;
void displayEven(int n){
    vector<int>v;
    while(n>0) {
        int f= n%10%2;
        if (f == 0) {
            v.push_back(n%10);
        }
        n = n/10;
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

}
int main() {
    int n;
    cin >> n;
    displayEven(n);

}