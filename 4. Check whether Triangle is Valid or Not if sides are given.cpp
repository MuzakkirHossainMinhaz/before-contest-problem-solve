/**
    Check whether Triangle is Valid or Not if sides are given.
    Sol: addition of every two sides is greater than the other side.

    Input: 7 10 5
    Output: Valid
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a+b>c && a+c>b && b+c>a)
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}
