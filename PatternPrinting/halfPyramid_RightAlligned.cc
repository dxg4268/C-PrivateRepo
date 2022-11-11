#include <iostream>
using namespace std;

/*
    *    5 - 1
   **    5 - 2
  ***    5 - 3
 ****    5 - 4
*****    5 - 5

*/

int main(){
	int n; cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;
	}

}
