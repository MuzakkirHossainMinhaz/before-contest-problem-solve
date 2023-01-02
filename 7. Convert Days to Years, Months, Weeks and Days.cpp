/**
    Convert Days to Years, Months, Weeks and Days.

    Input: 403
    Output: 1 year(s)
            1 month(s)
            1 week(s)
            1 day(s)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    cin >> days;

    int years, months, weeks;

    years = days/365;
    days -= 365*years;

    months = days/30;
    days -= 30*months;

    weeks = days/7;
    days -= 7*weeks;

    cout << years << " year(s)" << endl;
    cout << months << " month(s)" << endl;
    cout << weeks << " week(s)" << endl;
    cout << days << " day(s)" << endl;

    return 0;
}
