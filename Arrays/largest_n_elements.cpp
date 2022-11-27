// Largest 'n' elements in an array
#include <iostream>
using namespace std;

// 23,34,45,56,67,78,89

int largestElement(int arr[], int size) {
	int max_idx = 0;
	for (int i = 0; i < size; i++) {
		if (arr[max_idx] < arr[i]) {
			max_idx =i;
		}	
	}
	return max_idx;
}

int main(int argc, char *argv[])
{
	int n = 4;
	int v[] = {23,45,10,43,21,12,90};
	int size = sizeof(v)/sizeof(v[0]);
	
	int i = 0;
	int largest_array[n];

	while (i < n) {
		int idx = largestElement(v, size);
		largest_array[i] = v[idx];
		v[idx] = -1;
		i++;
	}
	
	std::cout << "Largest Elements : ";
	for (int i = 0; i < n; i++) {
		cout << largest_array[i] << ", ";
	}

	cout << endl;

	return 0;
}
