#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void printMatrix(int n){
    cout << "[";
    for (int i =1; i <=n; i++) {
        for (int i = 1; i <= n; i++) {
            int f = rand() %1000;
            cout << f << " ";
            if (i%n==0)
                cout << endl;
        }
    }
    cout << "]" << endl;
}
int main() {
    srand(time(0));
    int n;
    cin >> n;
    printMatrix(n);
}