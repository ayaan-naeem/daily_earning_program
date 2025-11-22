#include <iostream>
using namespace std;

int main()
{

    int days;
    float dollars;
    float exchangeRate;
    float salaryPerMonth;
    float salaryPerYear;
    float earningPerDayinRupees;
    float salaryAfterBonus;
    float salaryAfterTax;

    cout << "Enter Number of Working Days in a Month : ";
    cin >> days;

    cout << "Enter Earned Dollars per Day : ";
    cin >> dollars;

    cout << "Enter Current Exchange Rate (1 Dollar to Rupees) : ";
    cin >> exchangeRate;

    salaryPerMonth = days * dollars;

    salaryPerYear = salaryPerMonth * 12;

    salaryAfterBonus = salaryPerYear + (salaryPerMonth * 2.5);

    salaryAfterTax = salaryAfterBonus - (salaryAfterBonus * 25 / 100);

    earningPerDayinRupees = (salaryAfterTax / 365) * exchangeRate;

    cout << "Your Earning Per Day in Rupees is : " << earningPerDayinRupees << endl;

    return 0;
}
