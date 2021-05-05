#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Little Subarray Sum
    LINK : https://toph.co/p/little-subarray-sum
    */

int main()
{
    int n , x, y, sum = 0;
    cin >> n >> x >> y;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i >= x && i <= y)
            sum = sum + a[i];
    }
    cout << sum << endl;
    return 0;
}

