#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Better Passwords
    LINK : https://toph.co/p/better-passwords
    */

int main()
{
    string a, arev;
    cin >> a;
    arev.push_back(toupper(a[0]));
    for(int i = 1; i < a.size(); i++)
    {
        if(a[i] == 's')
            arev.push_back('$');
        else if(a[i] == 'i')
            arev.push_back('!');
        else if(a[i] == 'o')
            {
                arev.push_back('(');
                arev.push_back(')');
            }
        else
            arev.push_back(a[i]);
    }
    arev.push_back('.');

    cout << arev << endl;

    return 0;
}

