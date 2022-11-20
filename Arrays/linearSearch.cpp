#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char *argv[])
{
	int arr[] = {2,56,32,18,23,99,101,43,12};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key; cin >> key;
	int pos = -1;
	
	
	const int a = 10;

	for (int i = 0; i < size; i++) {
		if (key == arr[i]) {
			pos = i;
			break;
		}
	}

	if (pos != -1) {
		cout << "Element at " << pos << ", key -> " << arr[pos];
	}
	else
		cout << "Element not found";
}

