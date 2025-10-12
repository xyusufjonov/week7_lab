#include <iostream>
using namespace std;
int getTriangularNumber(int m) {
    return m*(m+1)/2;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 75; i++) {
        cout << getTriangularNumber(i);
        if (i%5 == 0)
            cout << endl;
    }

}