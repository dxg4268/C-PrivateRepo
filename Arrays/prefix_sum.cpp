#include <iostream>
#include <vector>
using namespace std;

/*
 1 3 6 10 5
 i = 4
 new_elem = 10 + 5 = 15
 v[i] = 15
*/


void prefix_sum(vector<int> &v) 
{
	for (int i = 1; i < v.size(); i++) {
		int new_elem = v[i-1] + v[i];
		v[i] = new_elem;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}


int main(int argc, char *argv[])
{
	vector<int> v;
	int size = 5;

	for (int i = 0; i < size; i++) {
		int e; cin >> e;
		v.push_back(e);	
	}

	prefix_sum(v);

	return 0;
}
