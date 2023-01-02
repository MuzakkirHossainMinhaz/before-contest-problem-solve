/**
    Take Input a Year from User and Check Whether the Given Year is Leap Year or Not.

    Input: 2023
    Output: Not a Leap Year
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if((year%4==0 and year%100!=0) or (year%400==0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;

    return 0;
}
