#include <iostream>
#include <vector>
using namespace std;


void sort(vector<int> &v) {
	int l_ptr = 0, r_ptr = v.size() - 1;
	while (l_ptr < r_ptr) {
		if( (v[l_ptr] % 2 == 0) && (v[r_ptr] % 2 != 0) ) {
			int t = v[l_ptr];
			v[l_ptr] = v[r_ptr];
			v[r_ptr] = t;
		}

		else if (v[l_ptr] % 2 != 0) {
			l_ptr++;
		}

		else if (v[r_ptr] % 2 == 0) {
			r_ptr--;
		}
	}
	return;
} 


int main(int argc, char *argv[])
{
	int n;
	cout << "Enter size : "; cin >> n;
	vector<int> v;
	
	for (int i = 0; i < n; i++) {
		int e;cin >> e;
		v.push_back(e);
	}

	sort(v);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}
