#include <iostream>
#include <vector>
using namespace std;

// Vectors are dynamic arrays 
// i.e. we can resize it when insert or delete elements
// Contiguous Memory Allocation

int main(int argc, char *argv[])
{
	// Declaring a vector 
	vector<int> vect;

	// Knowing the length of vector
	vect.size();

	// Resizing Vector to 8 
	// [ vect_name.resize(<int>) ]
	vect.resize(8);

	// Knowing the CAPACITY, i.e. acc to space alloacted to it in memory
	// capacity >= size
	// capacity icreases in power of 2 when adding element one by one
	vect.capacity();

	// Adding elements at the end
	vect.push_back(7);

	// Adding elements to particular index
	// vect.insert( <position rel to 1st element> , element);
	// vect.insert(3,100);

	// getting first element position and last element position
	// v.begin();
	// v.end()

	// Delete element
	vect.pop_back();
	//vect.erase( position rel to first or last element position );
	
	// Clearing a vector
	vect.clear();
	
}
