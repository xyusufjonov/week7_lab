#include <iostream>
#include <vector>
using namespace std;
bool isleap(int n) {
    if (n%4 == 0 && n%100 != 0 || n%400 == 0){
    return true;}
    else
        return false;
}
int main() {
    for (int i = 1983; i <= 1985; i++) {
        if (isleap(i)) {
            cout << i  << "  " << 29 <<endl;
        }else
            cout << i  << "  " << 28 <<endl;
    }

}