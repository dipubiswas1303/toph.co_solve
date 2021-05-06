#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Fair Distribution
    LINK : https://toph.co/p/fair-distribution
    */

int main()
{
    int a, b;
    cin >> a >> b;
    if(b % a == 0)
        cout << 0;
    else
        cout << a - b % a;

    return 0;
}
