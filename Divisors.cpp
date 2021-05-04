#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Divisors
    LINK : https://toph.co/p/divisors
    */

int main()
{
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++){
        if(a % i == 0)
            cout << i << endl;
    }
    return 0;
}
