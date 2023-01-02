/**
    Take Input a Number from User and Check Whether the Number is Even or Odd.
    Hints: every even number is divisible by 2.

    Input: 3332
    Output: Even
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if(number%2==0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
