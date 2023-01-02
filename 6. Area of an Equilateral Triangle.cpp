/**
    Area of an Equilateral Triangle.
    Formula: (sqrt(3)/4)*side^2

    Input: 50
    Output: Area = 1082.53
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int side;
    cin >> side;

    float area = (sqrt(3)/4)*pow(side, 2);

    cout << "Area = " << area << endl;

    return 0;
}
