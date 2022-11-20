// To find last occurence of element in an array
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	std::vector<int> vect;
	int size = 6;
	for (int i = 0; i < size; i++) {
		int num; cout << "Enter number : "; cin >> num;
		vect.push_back(num);
	}

	int x = 10;
	bool flag = false;
	for (int i = vect.size() ; i >= 0; i--) {
		if (vect[i] == x){
			cout << "Element found at : " << i << endl;
			flag = true;
			break;
		}
	}

	if (flag == false) {
		cout << "Element not found.";
	}

}
	
