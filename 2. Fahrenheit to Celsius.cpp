/**
    Enter the input in Fahrenheit and Find the output in Celsius.
    Formula: C/5 = (F-32)/9
          => C = ((F-32) * 5/9)

    Input: Fahrenheit: -40
    Output: Celsius: -40
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float fahrenheit;
    cout << "Fahrenheit: ";
    cin >> fahrenheit;

    float celsius = (fahrenheit-32) * float(5)/9;

    cout << "Celsius: " << celsius << endl;

    return 0;
}
