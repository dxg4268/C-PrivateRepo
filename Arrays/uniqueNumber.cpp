#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = {2,3,3,4,4,5,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int flag = true;
	int unique;

	for (int i = 0; i < size; i++) {
		flag = true;
		int current_element = arr[i];

		for (int j = i + 1; j < size; j++) {
			if (current_element == arr[j]) {
				flag = false;
				break;
			}
			unique = current_element;
		}
		
		if (flag)
			break;

	}

	if (flag) {
		cout << "Unique Number : " << unique;
	}
	return 0;

}
