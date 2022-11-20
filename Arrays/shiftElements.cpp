#include <iostream>
//#include "/home/dangerous_coder/Documents/C++/functions.cpp"
using namespace std;


void print(int size, int arr[]) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
}


int main()
{
	// int arr[] = {2,3,4,5,6,7};
	int T; cin >> T;
	int n; cin >> n;
	int k; cin >> k;
	int size = n; 
	int arr[size];
	
	
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	// cout << "Original Array:" << endl;

	for (int j = 1; j <= k; j++) {
		int temp = arr[n-1];
		for (int i = size-1; i >= 0; i--) {
			arr[i] = arr[i-1];
		}
		arr[0] = temp;
	}

	
	
	
	// cout << endl << "Shifted Array:" << endl;
	//print(size, arr);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
