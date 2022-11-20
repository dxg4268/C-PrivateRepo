#include <iostream>
#include <vector>
using namespace std;


int second_max(vector<int> v, int size) {
	int max, max_2;
	max = max_2 = 0;
	
	for (int i = 0; i < size; i++) {
		if ( max < v[i] ) {
			max_2 = max;
			max = v[i];
		}
		else if (v[i] < max && v[i] > max_2) {
			max_2 = v[i];
		}
		// 23 45 32 65 89 98
		// m2 = 0, mx = 23
		// m2 = 23, mx = 45
		// m2= 32, mx = 45
		// m2 = 45, mx = 65
		// m2 = 65, mx = 89
		// m2 = 89, mx = 98

	}

	return max_2;
}


int sec_max_2(vector<int> v) {
	int max = INT8_MIN;
	int max_2 = INT8_MIN;

	for (int i = 0; i < v.size(); i++) {
		if (max < v[i]) {
			max = v[i];
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (max_2 < v[i] && v[i] != max) {
			max_2 = v[i];
		}
	}

	return max_2;
}


int main(int argc, char *argv[])
{
	vector<int> v;
	int size = 6;

	//for (int i = 0; i < size; i++) {
	//	int num; cin >> num;
	//	v.push_back(num);
	//}
	
	v.push_back(56);
	v.push_back(554);
	v.push_back(99);
	v.push_back(43);
	v.push_back(23);
	v.push_back(21);

	int sec_max = sec_max_2(v);
	cout << "Second Max : " << sec_max;
	return 0;
}
