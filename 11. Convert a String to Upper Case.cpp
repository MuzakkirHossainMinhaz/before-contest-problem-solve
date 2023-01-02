/**
    Convert a String to Upper Case.

    Input: HeLLo World!
    Output: HELLO WORLD!
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    /*
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    */

    // using transform() function and ::toupper in STL
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout << str << endl;

    return 0;
}
