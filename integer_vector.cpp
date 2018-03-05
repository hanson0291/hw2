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

// This link was referenced for convertign a string to a number to be used by push_back function
// https://www.geeksforgeeks.org/converting-strings-numbers-cc/
//---------------------------------------------------------------------

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <vector>
#include <cstdio>

//using vector = std::vector<int>;

using namespace std;

class BasicVector
{
private:
	// CURRENT NUMBER OF ITEMS IN DATA
	int vector_size;

	// MAX items before RESIZE!
	int vector_capacity;
	
	// integer pointer to point dynamically allocated 1D integer array
	int* data;

	void resize();

public:
	BasicVector() {}; // default constructor does nothing

	// Non-Default Constructor 
	BasicVector(int);

	// Destructor
	~BasicVector();

	int& at(int);
	int& get(int);
	int& operator[](int);
	int& front();
	int& back();

	void push_back(int);
	void insert(int, int);
	void pop_back();

	int size();

	// returns vector_capacity field
	int& capacity();

	void print();

	void quit(){
		cout << "quit member function called";
	};
	
	void GetPrivateVectorSize(){
		cout << "private vector size = " << vector_size << endl;
	}
	void GetPrivateVectorCapacity(){
		cout << "private vector capacity = " << vector_capacity << endl;
	}
	int getPrivatePointerToData(){
		cout << "get int* data = " << data << endl;
	}
	int getPrivatePointerToData(int index){
		cout << "get int* data[index] = " << data[index] << endl;
	}
	int getPrivatePointerToDataDereferenced(){
		cout << "get int* &data = " << &data << endl;
	}

};




// O(n)
void BasicVector::resize(){
// MUST COPY ALL elements over into new array
// Use a temp var store the current address of data and delete[] to free old array
// Point data to new array!!!

	cout << "\nresize() function called!" << endl;

	vector_capacity = vector_capacity * 2;

	int resized[vector_capacity];

	//int* ResizedVector = &Vector[vector_size];
		// ERROR : ‘Vector’ was not declared in this scope

	//*data = new int copy[];
	//delete

	//for(int i = 0; i < vector_capacity; i++) {
        //resized[i] = [i]{i;};
        //cout << resized[i] << endl;
	//	resized[i] = data[i];
	//}
}
// O(1)
BasicVector::BasicVector(int capacity) {
// Non-Default Constructor accepts 1 int for capacity. if < 16, use 16 as capacity for data, Otherwise, set vector_capacity to the next largest power of 2, and create data with that new capacity.
	
	if(capacity < 16)
		capacity = 16;
	else { 
		capacity = pow(capacity,2);
	}

	//return capacity;
	//cout << "non-default constructor called, new vector object created with capacity = " << capacity << endl;
	vector_capacity = capacity;
}

BasicVector::~BasicVector() {
// sets all the filled elements in data to 0, and discards with array properly with delete []
	
	//delete [] vector_capacity;
	
	vector_capacity = NULL;

	delete [] &data;
	data = 0;
}

// MEMBER FUNCTIONS 

// O(1)
int& BasicVector::at(int index) {
// returns an int reference to array element specified. 
//conditional logic preventing use of index larger than vector_size (if) of basic vector object by calling exit 1 to terminate. 
// &data[index]

	cout << "vector[" << index << "] = " << &data[index] << endl;
	cout << "vector[" << index << "] = " << data[index] << endl;
	cout << "vector[" << index << "] = " << data[index] << endl;

	cout << endl;
	
	//for (unsigned i=0; i<vector.size(); i++)
    //	cout << ' ' << vector.at(i);
	
	cout << "index = " << index << endl; 
	cout << "&index =" << &index << endl;
}

// O(1)
int& BasicVector::get(int index){
// Invoke the operator[] function, passing index as its parameter, print result
	cout << endl;

		//cout << "&(data[index]) = " << &(data[index]);
		//cout << "(data[index]) = " << (data[index]);
		//cout << "*data = " << *data << endl;
		//cout << "&data[" << index << "] = " << &data[index];
		//cout << "data[index] = " << data[index] << endl;
		cout << "data[index] = " << data[index] << endl;
		getPrivatePointerToData(index);
}

// O(1)
int& BasicVector::front(){
// return an int reference to first array element. Calling front on an empty array is undefined behavior, so no need to consider. ASSUME IT SHOULDN"T BE DONE

// print result
	cout << endl;
	cout << "front function called!" << endl;

	//return vector;
}

int& BasicVector::back(){
// return an int reference to last array element. calling onto an empty array is undefined behavior, so no need to account for, ASSUME IT SHOULDN'T BE DONE
	
// print result
	cout << endl;
	cout << "back function called!" << endl;


}

void BasicVector::push_back(int ToBePushed){
// puts in 1st open index at back of array. 
//returns void/none if vector_size of array matches vector capacity before new element inserted
// will need to call resize funciton THEN insert the new value. 

//vector_size must be incremented after element is inserted
	
//	*data[] = ToBePushed;
	if(vector_size == vector_capacity)
		return;
	cout << endl;

	cout << "ToBePushed = " << ToBePushed << endl;

	int PrevMax = vector_capacity;

	resize();

	//[vector_size] = ToBePushed;
	//cout << "vector_size = " << vector.vector_size();
	//cout << "vector_capacity = " << vector.vector_capacity();
	//vector_capacity = vector_capacity + 1;



}

void BasicVector::insert(int index,int value){
// accepts 2 int, an index to insert at, and the value to be inserted. 
//all elements from given index to end of array need to be shifted once to right to make room for the inserted value.

	//gets passed index and value ints
	cout << endl;

	//vector.insert(index,value);
	//vector.insert(vector.begin() + 1, value);
	
	cout << "vector[" << index << "] = " << value << endl;

   // insert 22 as 2nd element
  // integers.insert( integers.begin() + 1, 22 );



}

void BasicVector::pop_back(){
// no parameters, no return type. Removes the current last element from the array by setting element to 0 and decrementing vector_size. Should do nothing if array is empty.

	cout << endl;
	
}

int BasicVector::size(){
// returns vector_size field
	cout << endl;
	cout << "size function called!" << endl;

	cout << "vector_size = " << vector_size << endl;


}

int& BasicVector::capacity(){
// return vector_capacity field

	cout << vector_capacity << endl;
	//return vector_capacity;
}

void BasicVector::print(){
// Outputs the vector_size and contents of data on a single line : elements(5): 2 -3 16 7 0
	
//cout << "vector_capacity = " << vector_capacity << endl;
	//for(unsigned int i = 0; i < vector_size; i++){

	cout << endl << "elements(" << vector_size << "): ";	
	for(unsigned int i = 0; i < vector_capacity; i++){
		//cout << "LOOP " << i << data[i];{i;};
		//cout << "LOOP " << i << data[i] << endl;

		//cout << *data << endl;
			// OUTPUT = 818185032
		//cout << data << endl;
			// OUTPUT = 0x7fc3ba0d0b1f
		//cout << "vector_capacity  " << i << endl;
		//cout << i << " " << ("%d",*data) << endl;
		cout << endl << i << " " << &(data) << endl;
		cout << i << " " << data[i] << endl;
		
		//data[i]->
		//cout << "operator[](i) = " << operator[](*data);
		//cout << *data->data[i];

	}
	cout << "end of print function!" << endl;

   //copy( Vector.begin(), Vector.end());

}

int& BasicVector::operator[](int index){
// returns an int reference to the array element specified 
// DO NOT USE friend function, instead implement as a class member function

	if(index > vector_size)
		exit(1);

	//return Vector[index](vector_size);
		// ERROR : ‘Vector’ was not declared in this scope
	//[index,index]{index;};
}



int main() {


// prompt the user for the starting capacity of the vector and create a vector object by invoking the non-default constructor of BasicVector

	int capacity;
	string input, push;
	//char input;
	
	cout << "Enter starting capacity of vector: ";
	cin >> capacity;

	if(cin.fail()){
		cout << "NOT AN INT! EXITING.";
		exit(1);
	}
	else if(capacity <= 0){
		cin.clear();
		cout << "capacity must be > 0, try again";
		cin >> capacity;
	}

	BasicVector Vector(capacity);
	//BasicVector Vector2(capacity);
	//cout << "vector_size = " << Vector.vector_size;
	Vector.GetPrivateVectorSize();
	Vector.GetPrivateVectorCapacity();
	Vector.getPrivatePointerToData();
	Vector.getPrivatePointerToData(0);
	Vector.getPrivatePointerToData(1); // output = 0?
	//Vector.getPrivatePointerToData(2);
	Vector.getPrivatePointerToDataDereferenced();

	//cout << Vector.getPrivatePointerToDataDereferenced(*data[0]) << endl;
	
	//for(int i = 0; i < capacity; i++){
		//cout << "Vector[" << i << "] = " << endl;
		//Vector(i,i);
	//}	
	
	//for(int i : Vector) {
    //    std::cout << i << '\n';
    //}

	cout << "\n\nNow accepting commands (quit to exit program):" << endl; 

	cout << "at <int>, get <int>, front, back, insert <int> <int>, push <int>, pop, size, capacity, print, quit" << endl;
	
	//  Enter a looping prompt that parses the following commands with the appropriate parameters, and uses the vector created in the previous step to "invoke the appropriate member functions member functions:"
	while(capacity >= 1) {
		
		getline(cin,input);
		//cout << input << endl;

		int integer = 0;

		if(input.rfind("at", 0) == 0){
		// returns an int reference to array element specified. conditional logic preventing use of index larger than vector_size (if) of basic vector object by calling exit 1 to terminate. 
		// accepts a single param, int index
		// print result

		cout << "input before erase() = " << input << endl;
		input.erase(0,3);
		cout << "input after erase() = " << input << endl;

			int value;

			istringstream ss(input);
			ss >> value;

			cout << value << endl;

			Vector.at(value);

				//if(location > vector.vector_size())
				//	exit(1);
		
		}
		else if(input.rfind("get", 0) == 0){
			input.erase(0,4);
			int value;
			istringstream gs(input);
			gs >> value;

				Vector.get(value);
		}
		else if(input == "front"){

			Vector.front();
		}
		else if(input == "back"){

			Vector.back();
		}
		else if(input.rfind("push", 0) == 0){
		// invoke pushback function, passing input by value(its param) 
		// input is a string and needs to be converted to an int somehow
			input.erase(0,5);
			int value;
			istringstream ps(input);
			ps >> value;
			cout << "push = " << value << endl;
				Vector.push_back(value);

			// 

		}
		else if(input.rfind("insert", 0) == 0){
		// accepts 2 int, an index to insert at, and the value to be inserted. all of the elements from the given index to the end of the array need to be shifted once to the right to make room for the inserted value.
			
			cout << "input before erase() = " << input << endl;
			input.erase(0,7);
			cout << "input after erase() = " << input << endl;
				int index;
				istringstream ss(input);
				ss >> index;
				cout << "index = "<< index << endl;
					input.erase(0,2);
					int value;
					istringstream st(input);
					st >> value;
					cout << "value = "<< value << endl;

			Vector.insert(index,value);
			//vector.insert(integer,input);

		}	
		else if(input == "pop"){
		
			Vector.pop_back();
		}
		else if(input == "size"){

			cout << "vector.size() = " << Vector.size() << endl;
			//cout << "size() = " << capacity.size() << endl;
		}
		else if(input == "capacity"){
			Vector.capacity();
		}
		else if(input == "print"){
	
			Vector.print();

		}
		else if(input == "quit" || input == "exit"){

			cout << "\n\nExiting Program\n\n";
			exit(1);
		}
		
		cout << "> ";
	}

	return 0;
}


//cout << "> ";
//cin >> input;
//cout << input << endl;
//found = input.find();
//cout << "input.find('push') works\a" << endl;
//cout << "input before erase(0,2) = " << input << endl;
//cout << "input after  erase(0,2) = " << input << endl;
//integer = input;
//cout << capacity << endl;
//cout << "You have selected at <index>" << endl;


// PUSH FUNCTION
	//if(input.find("push" != std::string::npos)){
	//if(CheckSubstring(input, "push")){
	//if (input.find("push")){
	//if(strstr(input.c_str(),"push")){
	//if ( ! (istringstream(input) >> integer) ) { integer = 0;
	//if(input.find(push)){
	//if(input == push){
	//push=input.find('push');
	//if ("push" != string::npos){
	//if(input == "at"){
	//cout << "push_back function called!" << endl;

// POP Function
	//cout << "pop_back function called!" << endl;
	//cout << "You have selected pop" << endl;

// AT FUNCTION
	//char charinteger[];			
	//sscanf ( charinteger, "%d", &integer );	
	//atoi(input);
	//cout << "at(int index) function called!" << endl;

// GET FUNCTION
	//cout << "You have selected get <index>" << endl;
	//cout << "get(int index) function called!" << endl;
	//cout << "get = " << value << endl;
	//cout << "gs value = " << value;

// FRONT FUNCTION
	//cout << "You have selected front" << endl;
// BACK FUNCTION
	//cout << "You have selected back" << endl;

// PRINT FUNCTION 
	//cout << "print function called!" << endl;
	//cout << "You have selected print()" << endl;
	//cout << "elements(" << capacity << "): ";
	//cout << "vector_size = " << vector_size << endl;
	//cout << Vector[i](i) << " "; 
		// ERROR : ‘Vector’ was not declared in this scope
	//cout << Vector[i] << " ";
	//cout << Vector(0,0);
	//cout << "Vector integers contain: ";

	

// CAPACITY FUNCTION
	//cout << "You have selected capacity." << endl;
	//cout << "Returning vector capacity (" << vector_capacity << ")" << endl;
	//cout << "capacity function called!" << endl;

// INSERT FUNCTION
	//cout << "insert function called!" << endl;
	//cout << "You have selected insert <index> <value>" << endl;