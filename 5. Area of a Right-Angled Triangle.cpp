/**
    Area of Right-Angled Triangle.
    Formula: 0.5*base*height

    Input: 10 10
    Output: Area = 50
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int base, height;
    cin >> base >> height;

    float area = 0.5 * base * height;

    cout << "Area = " << area << endl;

    return 0;
}
