#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Full Pyramid
    LINK : https://toph.co/p/full-pyramid
    */

int main()
{
    int n, row, col;
    cin >> n;
    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            cout << " ";
        }
            for(col=1; col<=row; col++){
            	if(row > col)
					cout << "* ";
				else
					cout << "*";
        }
        cout << endl;
    }
    return 0;
}

