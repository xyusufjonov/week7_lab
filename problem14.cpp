#include <iostream>
#include <cmath> // for pow()
#include <iomanip> // for formatting output
using namespace std;
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}

int main() {
    double investmentAmount, annualInterestRate;

    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    cout << "Enter annual interest rate (e.g., 9 for 9%): ";
    cin >> annualInterestRate;


    double monthlyInterestRate = annualInterestRate / 12 / 100;

    cout << fixed << setprecision(2);
    cout << "\nYears\tFuture Value" << endl;
    for (int years = 1; years <= 30; years++) {
        double value = futureInvestmentValue(investmentAmount, monthlyInterestRate, years);
        cout << years << "\t" << value << endl;
    }

    return 0;
}
