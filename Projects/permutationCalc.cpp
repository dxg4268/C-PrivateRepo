#include <iostream>
using namespace std;

/*

    Combination, finding possible combinations of numbers
	_ _ _ _ _ _
	6 5 4 3 2 1


*/


int fact(int num){
	int factorial = 1;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}
	return (factorial);
}



int main(int argc, char *argv[])
{
	// Input numbers to find possible combinations
	int numbers[6];
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}

	int factorial = fact(size);
	cout << "Number of combination without repeation : " << factorial;
	
	bool repeat = false;

	for (int i = 0; i < size; i++) {
		int num = numbers[i];
		int steps = 1;
		int arr[size];
	
		arr[0] = num;

		while (steps >= 5) {
			
		};
	}
}
