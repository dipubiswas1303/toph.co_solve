#include <iostream>
#include <bits/stdc++.h>
int a[50];

using namespace std;

/**
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : Fibonacci Numbers
LINK : https://toph.co/p/fibonacci-numbers
*/
int main()
{
    int n;
    cin >> n;
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i < n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n - 1] << endl;

    return 0;
}
