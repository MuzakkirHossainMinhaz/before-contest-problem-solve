/**
    Find Two Strings are Equal or Not.

    Input: abxcyz abxcyz
    Output: Equal
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    if(str1 == str2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}
