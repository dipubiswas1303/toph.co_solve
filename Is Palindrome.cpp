
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Is Palindrome
    LINK : https://toph.co/p/is-palindrome
    */

int main()
{
    string a, a1;
    cin >> a;

    for (int i = a.size() - 1; i > -1; i--)
        a1.push_back(a[i]);
    if(a == a1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
