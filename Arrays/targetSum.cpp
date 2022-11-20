// find number of pairs whose sum is equal to target sum
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
	int size = 6;
	for (int i = 0; i < size; i++){
		int num; cout << "Enter Number : ";
		cin >> num;
		v.push_back(num);
	}

	int key = 7;
	int count = 0;

	for (int i = 0; i < size; i++) {
		int elem = v[i];
		for (int j = i + 1; j < size; j++) {
			int sum = elem + v[j];
			if (sum == key) {
				count += 1;
			}
		}
	}

	cout << "No of pairs : " << count;

    return 0;
}
