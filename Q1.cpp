#include <iostream>
using namespace std;

int main()
{
    int day, month, year;

    cout << "Enter the month number : ";
    cin >> month;

    while (month > 12)
    {
        cout << "Month should not be more than 12. Enter again: ";
        cin >> month;
    }

    if ((month % 2 == 0 && month != 2) )
    {
        cout << "Enter the day (shouldn't be more than 31): ";
        cin >> day;

        while (day > 31)
        {
            cout << "Try again. Enter the day: ";
            cin >> day;
        }
    }
    else if (month == 2)
    {
        cout << "Enter the day (shouldn't be more than 28): ";
        cin >> day;

        while (day > 28)
        {
            cout << "Try again. Enter the day: ";
            cin >> day;
        }
    }
    else
    {
        cout << "Enter the day (shouldn't be more than 30): ";
        cin >> day;

        while (day > 30)
        {
            cout << "Try again. Enter the day: ";
            cin >> day;
        }
    }

    cout << "Enter the year : ";
    cin >> year;

    cout << "//display : //" << endl;
    cout << day << "/" << month << "/" << year;

    return 0;
}
