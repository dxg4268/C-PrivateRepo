#include <iostream>
using namespace std;

/*
 
   binary search is an algorith.
   keep on dividing the array until value is found
   array must be sorted 
*/

int main(int argc, char *argv[])
{
	int size = 10;
	int arr[] = {23,34,45,56,67,78,89,90,95,99};
	
	int u = size - 1;
	int l = 0; int m = 100;

	int key; 
	cout << "Enter Key : "; cin >> key;
	
	bool flag = false; int idx;

	while(l != u) {
		m = (u + l) / 2;
		if (key == arr[m]) {
			flag = true;
			idx = m;
			break;
		}

		else if(key > arr[m]) {
			l = m;
		}

		else {
			u = m;
		}

	}
	

	if (flag) {
		cout << "Element at : " << idx;
	}
	else
		cout << "Key not found" << endl;
	

	return 0;

}
