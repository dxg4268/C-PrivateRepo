#include <iostream>
using namespace std;
#include <vector>


int main(int argc, char *argv[])
{
	int size; cin >> size;
	int arr[size];

	std::vector<int> a;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}	
	int max = INT8_MIN;

	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	cout << "Max Value is : " << max;
}
