/**
    Enter the input in Celsius and Find the output in Fahrenheit.
    Formula: C/5 = (F-32)/9
          => F = ((C*9)/5 + 32)

    Input: Celsius: 5
    Output: Fahrenheit: 41
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float celsius;
    cout << "Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius*9)/5 + 32;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
