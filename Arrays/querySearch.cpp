#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int n = 5;
	vector<int> v(n);
	v.push_back(45);
	v.push_back(67);
	v.push_back(24);
	v.push_back(6);
	v.push_back(90);

	int size = 1e5 + 10;
	vector<int> freq(size, 0);
	
	for (int i = 0; i < v.size(); i++) {
		freq[v[i]]++;
	}

	int q;
	cout << "Enter No. of Queries : ";
	cin >> q;
	
	int searchResult[q];

	cout << "Enter Queries," << endl;
	for (int i = 0; i < q; i++) {
		int num; cin >> num;
		cout << "Count : " << freq[num] << endl;
	}

	return 0;	

}
