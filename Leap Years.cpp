#include <iostream>
#include <bits/stdc++.h>
int a[50];

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Leap Years
    LINK : https://toph.co/p/leap-years
    */
int main()
{
    int n;
    cin >> n;
    if(n % 400 != 0 && n % 4 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
