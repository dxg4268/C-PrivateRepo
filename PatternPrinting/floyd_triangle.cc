#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n; cin >> n;
	int c = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++, c++) {
			cout << c << " ";
		}
		cout << endl;
	}
}
