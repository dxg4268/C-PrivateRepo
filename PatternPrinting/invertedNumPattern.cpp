#include <iostream>
using namespace std;


/*
 1 2 3 4 5     n - i + 1
 1 2 3 4
 1 2 3 
 1 2 
 1
 
 
  */


int main(int argc, char *argv[])
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i+1; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

}
