#include <iostream>
#include <vector>
using namespace std;

/*
 1 2 2 1
 i = 0
 j = 2
 v[2] = v[2] + v[1] + v[0]

 k = 1
 v[2] = v[2] + v[3]
 v[1] = v[1] + v[2]
 */

bool partitionCheck(vector<int> &v)
{
	int prefix_sum = 0;
	int suffix_sum = 0;
	for (int i = 0; i < v.size(); i++) {
		int j; int t1;
		for (j = 1; j <= i; j++) {
			int t1 = v[j];
			v[j] = v[j] + v[j-1];
			cout << t1 << endl;
		}
		
		int k;
		for (k = v.size() - 2; k > i; k--) {
			v[k] = v[k] + v[k+1];
			cout << "k... " << v[k] << endl;
			suffix_sum = v[k];
		}
	
	if (v[j] == v[k]) {
			return true;
	}
	}
	

	return false;
}


int main(int argc, char *argv[])
{
	std::vector<int> v;
	int size = 4;

	for (int i = 0; i < size; i++) {
		int e; cin >> e;
		v.push_back(e);
	}

	bool res = partitionCheck(v);
	
	if (res)
		cout << "Partition Found" << endl;
	else
		cout << "Partition Not Found" << endl;
	
	return 0;
}
