/**
    Take a Number from User and Print the Day Name of a Week.
    Hints: a week starts from Saturday.

    Input: 4
    Output: Tuesday
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfDay;
    cin >> numberOfDay;

    switch(numberOfDay)
    {
    case 1:
        cout << "Saturday" << endl;
        break;
    case 2:
        cout << "Sunday" << endl;
        break;
    case 3:
        cout << "Monday" << endl;
        break;
    case 4:
        cout << "Tuesday" << endl;
        break;
    case 5:
        cout << "Wednesday" << endl;
        break;
    case 6:
        cout << "Thursday" << endl;
        break;
    case 7:
        cout << "Friday" << endl;
        break;
    default:
        cout << "Warning!\nEnter a number between 1 to 7." << endl;

    }

    return 0;
}
