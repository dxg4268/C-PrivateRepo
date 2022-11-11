#include<iostream>
using namespace std;

int main ()
{
  int n; cin >> n;
  int m; cin >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1;j <= m; j++) {
      if ( j == 1 || j == m || i == n || i == 1) {
        cout << "*";
      }
      else
      cout << " ";
    }
    cout << endl;
  }
  
  return 0;
}
