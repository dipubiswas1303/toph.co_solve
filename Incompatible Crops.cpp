#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    /*
    NAME : DIPU BISWAS
    JUST CSE 2019 - 2020
    PROBLEM CODE : Incompatible Crops
    LINK : https://toph.co/p/incompatible-crops
    */

int main()
{
    int m, n, c = 0;
    cin >> m >> n;
    char a[m][n];
    m--;
    n--;
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(a[i][j] == '.'){
                if(i == 0 && j == 0){
                   if(a[1][0] == '.' && a[0][1] == '.')
                        c++;
                }
                else if(i == 0 && j == n){
                    if(a[0][n - 1] == '.' && a[1][n] == '.')
                        c++;
                }
                else if(i == m && j == 0){
                    if(a[m][1] == '.' && a[m - 1][0] == '.')
                        c++;
                }
                else if(i == m && j == n){
                    if(a[m - 1][n] == '.' && a[m][n - 1] == '.')
                        c++;
                }
                else if(j == 0 && (i != 0 || i != m)){
                    if(a[i - 1][0] == '.' && a[i + 1][0] == '.' && a[i][1] == '.')
                        c++;
                }
                else if(j == n && (i != 0 || i != m)){
                    if(a[i - 1][n] == '.' && a[i + 1][n] == '.' && a[i][n - 1] == '.')
                        c++;
                }
                else if(i == 0 && (j != 0 || j != n)){
                    if(a[0][j - 1] == '.' && a[0][j + 1] == '.' && a[1][j] == '.')
                        c++;
                }
                else if(i == m && (j != 0 || j != n)){
                    if(a[m][j - 1] == '.' && a[m][j + 1] == '.' && a[m - 1][j] == '.')
                        c++;
                }
                else{
                    if(a[i - 1][j] == '.'&& a[i + 1][j] == '.' && a[i][j - 1] == '.' && a[i][j + 1] == '.')
                        c++;
                }

            }
        }
    }
    cout << c << endl;
    return 0;
}
