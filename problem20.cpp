#include <iostream>
#include <string>
using namespace std;
string convertMillis(long millis) {
    long totalSeconds = millis / 1000;
    long seconds = totalSeconds % 60;
    long totalMinutes = totalSeconds / 60;
    long minutes = totalMinutes % 60;
    long hours = totalMinutes / 60;

    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}

int main() {
    long millis;
    cin >> millis;

    string time = convertMillis(millis);
    cout << time << endl;

    return 0;
}
