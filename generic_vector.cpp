//---------------------------------------------------------------------
// Name: Andrew Hanson
// Email: awh5563@psu.edu
// Class: CMPSC 122, Section 1
// Program 1.2
// Due Date: March 4, 2018, 11:59 PM
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

template<typename T>
class BasicVector
{
private:
	int vector_size;
	int vector_capacity;
	T* data;
public:

};

int main() {
	int type;
	cout << "Specify which data type to store in vector:" << endl;
	cout << "	1) int" << endl;
	cout << "	2) float" << endl;
	cout << "	3) double" << endl;
	cout << "	4) string" << endl;
	cout << "	5) bool" << endl;
	cout << "> ";
	cin >> type;
	return 0;
}