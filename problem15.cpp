#include <iostream>
using namespace std;
void printASCII(char ch1, char ch2, int numberPerLine) {
    int size1 = int(ch1);
    int size2 = int(ch2);
    int count = 0;
    for (int i = size1; i <= size2; i++) {
        cout << char(i) << " ";
        count = count + 1;
        if (count % numberPerLine == 0) {
            cout << endl;
        }
    }


}
int main() {
   printASCII('a', 'm', 6);

}