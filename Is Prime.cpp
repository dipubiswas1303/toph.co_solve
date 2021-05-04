#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Is Prime
    LINK : https://toph.co/p/is-prime
    */

int main()
{
    int a, c = 0;
    cin >> a;
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0)
        {
             c++;
             break;
        }
    }

    if(c == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
