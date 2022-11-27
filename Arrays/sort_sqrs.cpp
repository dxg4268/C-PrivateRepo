#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


void sort(vector<int> &v) {
	int l_ptr = 0, r_ptr = v.size() - 1;
	vector<int> v1;

	while (l_ptr <= r_ptr) {
		//int l_sq = v[l_ptr] * v[l_ptr]; v[l_ptr] = l_sq;
		//int r_sq = v[r_ptr] * v[r_ptr]; v[r_ptr] = r_sq;

		if (abs(v[l_ptr]) < abs(v[r_ptr])) {
			v1.push_back(v[r_ptr] * v[r_ptr]);
			r_ptr--;
		}

		else{
			v1.push_back(v[l_ptr] * v[l_ptr]);
			l_ptr++;
		}
	}
	
	for (int i = 0; i < v.size(); i++) {
		cout << v1[i] << " ";
	}
}


int main(int argc, char *argv[])
{
	vector<int> v;
	
	int size = 6;
	for (int i = 0; i < size; i++) {
		int e; cin >> e;
		v.push_back(e);
	}

	sort(v);
	return 0;
}
