#include <iostream>
#include <ctime>
using namespace std;

int main() {
    long seconds = time(0);
    long minutes = seconds / 60;
    long hours = minutes / 60;
    long days = hours / 24;
    int currentSecond = seconds % 60;
    int currentMinute = minutes % 60;
    int currentHour = hours % 24;
    int year = 1970;
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (true) {
        bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        int daysInYear = leap ? 366 : 365;

        if (days >= daysInYear) {
            days -= daysInYear;
            year++;
        } else break;
    }

    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    monthDays[1] = leap ? 29 : 28;

    int month = 0;
    while (days >= monthDays[month]) {
        days -= monthDays[month];
        month++;
    }

    int day = days + 1;
    cout << "Current date and time: "
         << year << "-"
         << (month + 1) << "-"
         << day << " "
         << currentHour << ":"
         << currentMinute << ":"
         << currentSecond << endl;

    return 0;
}

