/**
    Calculate the area of a Circle.
    Formula: A = PI * radius^2
    PI = 3.14159

    Input: Radius: 5
    Output: Area: 78.5397
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float radius, area;
    cout << "Radius: ";
    cin >> radius;

    float PI = 3.14159;    /// PI = 2*acos(0);

    area = PI * radius * radius;

    cout << "Area: " << area << endl;

    return 0;
}
