// #include<bits/stdc++.h>
#include<iostream>
using namespace std;


/*
*****
*****
*****
*/


int main() {
    /*
    For any pattern, look for rows and column and how they are
    dependent upon the input
    What we have to print?

    */


    int m,n;
    cin >> m;
    cout << ".";
    cin >> n;

    for (int i = 0; i < m; i++){

        for (int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}