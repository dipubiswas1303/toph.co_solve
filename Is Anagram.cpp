#include <iostream>
#include <bits/stdc++.h>
int X[26];
int x[26];

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Is Anagram
    LINK : https://toph.co/p/is-anagram
    */

int main()
{
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++){
        int y = a[i] - 'a';
        X[y]++;
    }
    for(int i = 0; i < b.size(); i++){
        int h = b[i] - 'a';
        x[h]++;
    }
    if(a == b)
        cout << "No";
    else{
    int c = 0;
    if(a.size() == b.size()){
        for(int i = 0; i < 26; i++){
            if(X[i] == x[i])
                c = 0;
            else{
                c++;
                break;
            }
    }
    if(c == 0)
        cout << "Yes";
    else
        cout << "No";
    }
    else
        cout << "No";
    }
    return 0;
}
