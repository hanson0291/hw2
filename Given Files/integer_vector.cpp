//---------------------------------------------------------------------
// Name: Joshua Riojas
// Email: jwr5427@psu.edu
// Class: CMPSC 122, Section 3
// Program 1.1
// Due Date: February 28, 2018, 11:59 PM
//
// Description: This program implements a basic integer vector
// and provides the user with an interactive prompting system
// to issue commands over an instance of our BasicVector class.
//
// Acknowledgements:
// 1. Please use this portion of the banner comment to list
// any resources or individuals you consulted on the creation
// of this program.
//---------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

class BasicVector
{
private:
	int vector_size;
	int vector_capacity;
	int* data;

	void resize();

public:
	BasicVector() {}; // default constructor does nothing
	BasicVector(int);
	~BasicVector();

	int& at(int);
	int& operator[](int);
	int& front();
	int& back();

	void push_back(int);
	void insert(int, int);
	void pop_back();

	int size();
	int capacity();

	void print();
};

void BasicVector::resize()
{

}

BasicVector::BasicVector(int capacity)
{

}

BasicVector::~BasicVector()
{

}

int& BasicVector::at(int index)
{

	exit(1);
}

int& BasicVector::operator[](int index)
{

	exit(1);
}

// Add in the rest of the public functions

int main()
{
	int capacity;
	cout << "Enter starting capacity of vector: ";
	cin >> capacity;

	BasicVector vector(capacity);

	// Implement command prompt loop
	while()
	{
		
	}

	return 0;
}