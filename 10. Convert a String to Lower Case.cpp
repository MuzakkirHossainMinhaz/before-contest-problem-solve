/**
    Convert a String to Lower Case.

    Input: HeLLo World!
    Output: hello world!
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
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }
    */

    // using transform() function and ::tolower in STL
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str << endl;

    return 0;
}
