/**
    A Character is Alphabet, Digit or Special Character.

    Input: 5         |  Z           |    #
    Output: Digit    |  Alphabet    |    Special Character
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char character;
    cin >> character;

    if(character>='A' && character<='Z'
       || character>='a' && character<='z')
        cout << "Alphabet" << endl;
    else if(character>='0' && character<='9')
        cout << "Digit" << endl;
    else
        cout << "Special Character" << endl;

    return 0;
}
