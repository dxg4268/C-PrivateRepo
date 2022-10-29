#include<bits/stdc++.h>
using namespace std;
/*

*/

int main() {
    int n; cin >> n;

    for (int i = 1; i <= n; i++){

        for (int j = (n-1); j >= i; j--){
            cout << " ";
            
            // int k = 1;
        }
        for (int k = 1; k <= n - i; k++){
                cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}