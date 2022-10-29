#include<iostream>
using namespace std;


int greatest(){
    int max = 0;
    for (int i = 0; i < 4; i ++){
        int a; cin >> a; cout << endl;

        if (a > max){
            max = a;
        }

    }
    return max;
}

int main() {
    
    int number = greatest();
    cout << number << endl;
    return 0;
}