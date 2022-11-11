#include<iostream>
using namespace std;

/*
    *****         5 - 1 + 1
    ****          5 - 2 + 1
    ***           5 - 3 + 1
    **            5 - 4 + 1
    *             5 - 5 + 1
 * */


int main (int argc, char *argv[])
{
  int n; cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= (n - i) + 1 ; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
