/**
    Take Three Numbers from the User and Find the Largest Number among Those Numbers.

    Input: 34 76 54
    Output: Largest Number = 76
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if(num1>num2 and num1>num3)
        cout << "Largest Number = " << num1 << endl;
    else if(num2>num1 and num2>num3)
        cout << "Largest Number = " << num2 << endl;
    else
        cout << "Largest Number = " << num3 << endl;

    return 0;
}
