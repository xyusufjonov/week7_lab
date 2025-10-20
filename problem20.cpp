#include <iostream>
using namespace std;
void convertMillis(long millis) {
    int seconds = millis / 1000;
    int minutes = seconds / 60;
    int hours = minutes / 60;
    minutes = minutes % 60;
    seconds = seconds % 60;
    cout << hours << ":" << minutes << ":" << seconds << endl;

}
int main() {
    convertMillis(555550000);


}
