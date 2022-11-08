#include <iostream>
using namespace std;

int main()

{
    int dd, mm, yyyy;
    cout << "Enter the date:" << endl;
    cin >> dd;
    cout << "Enter the month:" << endl;
    cin >> mm;
    cout << "Enter the year:" << endl;
    cin >> yyyy;

    int c = yyyy / 100;
    int d = yyyy % 100;

    if (mm >= 3 && mm <= 12)
        mm = mm - 2;
    else
        mm = mm + 10;

    int weekday = (dd + (13 * mm - 1) / 5 + d + d / 4 + c / 4 + 5 * c) % 7;

    switch (weekday)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "wed";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "Saturday";
        break;

    default:
        cout << "Enter valid date";
    }

    return 0;
}