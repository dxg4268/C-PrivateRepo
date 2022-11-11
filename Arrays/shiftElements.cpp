#include <iostream>
#include "/home/dangerous_coder/Documents/C++/fuctions.cpp"
using namespace std;


int main(int argc, char *argv[])
{
	int arr[] = {2,3,4,5,6,7};
	
	int size = 6; 
	int temp = arr[5];
	
	cout << "Original Array:" << endl;
	printArr(arr, 6);

	for (int i = size-1; i >= 0; i--) {
		arr[i] = arr[i-1];
	}
	
	arr[0] = temp;
	
	cout << endl << "Shifted Array:" << endl;
	printArr(arr, 6);

}
