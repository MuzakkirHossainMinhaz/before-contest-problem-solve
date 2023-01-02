/**
    Take A Candidate's Age from User and Check the Candidate is Eligible for Casting the Vote or Not.
    Hints: Less than or equal 18 years old peoples are eligible.

    Input: 23
    Output: This person is eligible for casting the vote.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if(age<0)
        cout << "Warning!\nPlease enter a valid age." << endl;
    else if(age>=18)
        cout << "This person is eligible for casting the vote." << endl;
    else
        cout << "This person is not eligible for casting the vote." << endl;

    return 0;
}
