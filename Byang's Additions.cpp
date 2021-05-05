#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Byang's Additions
    LINK : https://toph.co/p/byang-learns-to-add-almost
    */

int main()
{
    int a, b, c = 0, h = 0,sum = 0;
    cin >> a >> b;
    int x = a, y = b;
    while(x != 0 && y != 0){
        int j = x % 10;
        int k = y % 10;
        h++;
        if(j + k > 9)
        {
            cout << "Yes" << endl;
            break;
        }
        else{
            c++;
            sum = sum + j + k;
            x = x / 10;
            y = y / 10;
        }
    }
    if(h == c)
        cout << "No" << endl;

    return 0;
}

