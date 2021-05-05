#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Caesar Cipher
    LINK : https://toph.co/p/caesar-cipher
    */

int main()
{
    int x;
    cin >> x;
    string s, sr;
    cin.ignore();
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ')
            sr.push_back(s[i]);

        else if(s[i] - x < 97)
            sr.push_back(s[i] - x + 26);
        else
            sr.push_back(s[i] - x);
    }
    cout << sr;
    return 0;
}
