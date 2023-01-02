/**
    Given a String and Count the Number of Alphabets, Digits and Special Characters in the String.

    Input: start_2023
    Output:
        Digits = 4
        Alphabets = 5
        Special Characters = 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alphabet=0, digit=0, special_character=0;
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='0' and str[i]<='9')
            digit++;
        else if((str[i]>='A' and str[i]<='Z') or (str[i]>='a' and str[i]<='z'))
            alphabet++;
        else
            special_character++;
    }

    cout << "Digits = " << digit << endl;
    cout << "Alphabets = " << alphabet << endl;
    cout << "Special Characters = " << special_character << endl;

    return 0;
}
