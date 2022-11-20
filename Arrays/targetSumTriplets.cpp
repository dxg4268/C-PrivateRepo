#include <iostream>
#include <vector>
using namespace std;

int main(){
	int v[] = {3,1,2,4,0,6};
	int key = 5;
	int size = sizeof(v)/sizeof(v[0]);
	int sum = 0;
	int count = 0;


	for (int i = 0; i < size; i++) {
		int e1 = v[i];
		for (int j = i + 1; j < size; j++) {
			int e2 = v[j];
			for (int k = j + 1; k < size; k++) {
				sum = e1 + e2 + v[k]; 
				if (sum == key) {
					count++;
				}
			}
		}
	}

	cout << "No. of Triplets : " << count;
	
	return 0;
}
