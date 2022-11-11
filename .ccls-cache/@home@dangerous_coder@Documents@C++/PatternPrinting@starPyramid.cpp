#include<iostream>
using namespace std;

/*
    *             n - i and 1 to 1 (2i -1) 
   ***                      1 to 3 (2(2) - 1)
  *****                     1 to 5 (2(3) - 1)
 *******                    1 to 7 (2(4) -1)
 *
 *
 *
 * */


int main (int argc, char *argv[])
{
  int n; cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= (n-i); j++) {
      cout << " "; 
    }

    for (int j = 1; j <= (2 * i) - 1; j++){
      cout << "*";
    }
    cout << endl;




  }
  
  return 0;
}
