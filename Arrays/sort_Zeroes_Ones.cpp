#include <iostream>
using namespace std;	
	



int main(int argc, char *argv[])
{
	int v[] = {0,1,1,0,1,0,1,0,1,1,0,1};
	int size = sizeof(v)/sizeof(v[0]);
	
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j >= 0; j--) {
			if (i < j){
				if (v[i] == 1 && v[j] == 0) {
					int t = v[i];
					v[i] = v[j];
					v[j] = t;
					break;
				}
			}
		}
	}
	
	for (int i = 0; i < size; i++) {
		cout << v[i] << " ";	
	}
	cout << endl;
	return 0;

}
