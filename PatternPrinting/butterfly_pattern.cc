#include <iostream>
using namespace std;

/*
*      *     6  
**    **     4
***  ***     2
********     0 


*/

int main(int argc, char *argv[])
{
	int n; cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		for (int j = 1; j <= 2 * (n-i) ; j++) {
			cout << " ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
