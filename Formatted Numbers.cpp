#include <iostream>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Formatted Numbers
    LINK : https://toph.co/p/formatted-numbers
    */

int main()
{
    string a;
    cin >> a;
    int r = a.size();
    if( r > 6)
    for(int i = 0; i < r; i++){
        cout << a[i];
        if((r - 1 - i) == 6 || (r - 1 - i) == 3)
            cout << ",";
    }
    else if( r > 3)
    for(int i = 0; i < r; i++){
        cout << a[i];
        if((r - 1 - i) == 3)
            cout << ",";
    }
    else
        cout << a;

    return 0;
}

