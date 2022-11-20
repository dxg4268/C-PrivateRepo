#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "Enter Size of Array : ";
	int size; cin >> size;

	int sum = 0;
	int array[size];

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}

	cout << "Sum is : " << sum << endl; 


}
