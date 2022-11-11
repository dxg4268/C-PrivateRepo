#include <iostream>
using namespace std;


/*
     1
    121
   12321
  1234321
 123454321
  
*/


int main(int argc, char *argv[])
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << "  ";             // for presentation purpose, adding double space
		}
		
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}

		for (int j = i - 1; j > 0; j--) {
			cout << j << " ";
		}
		cout << endl;

	}
}
