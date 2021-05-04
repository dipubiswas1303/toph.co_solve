#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Clock Math
    LINK : https://toph.co/p/clock-math
    */

int main()
{
    int h, m;
    float ans = 0;
    cin >> h >> m;
    ans = h * 30 + m * 0.5;
    ans = abs(ans - m * 6);
    if(ans > 180)
        cout << 360 - ans;
    else
        cout << ans;
    return 0;
}
