#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int arr[6]= {1,2,3,4,5,6};
int c=0;
bool roll() {
    int a = rand()%6;
    int b= rand()%6;

    if (a+b==c) {
        return true;
    }else
        return false;

}
int main() {
    srand(time(0));
    int a = rand()%6;
    int b= rand()%6;


    if (a+b==11 || b+a==2 || b+a==3) {
        cout << "You win";
    }else if (a+b == 7|| a+b==11) {
        cout << "You lose";
    }else {
        int c = a+b;
        if (roll()) {
            cout << "You win";
        }else
            cout << "You lose";
    }
}