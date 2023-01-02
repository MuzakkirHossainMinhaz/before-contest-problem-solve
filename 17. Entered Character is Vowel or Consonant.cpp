/**
    Given a Character from User and Check Whether the Character is Vowel or Consonant.
    Sol: a, e, i, o, u are vowel.

    Input: m
    Output: Consonant
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char character;
    cin >> character;

    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'
       || character=='A' || character=='E' || character=='I' || character=='O' || character=='U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;

    return 0;
}
