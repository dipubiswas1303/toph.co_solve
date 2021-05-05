#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Decent Arrays
    LINK : https://toph.co/p/decent-arrays
    */

int main()
{
    int n, c = 0;
    cin >> n;
    int a[n + 1];
    a[0] = 0;
    for(int i = 1; i < n; i++)
    {
         cin >> a[i];
         if(a[i - 1] > a[i])
            c++;
    }
    if(c == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

