// C++ Program to Illustrate that Array Name is a Pointer 
// that Points to First Element of the Array 
#include <iostream> 
using namespace std; 

int main() 
{ 
	// Defining an array 
	int arr[] = { 1, 2, 3, 4 }; 

	// Define a pointer 
	int* ptr = arr; 

	// Printing address of the arrary using array name 
	cout << "Memory address of arr: " << &arr << endl; 

	// Printing address of the array using ptr 
	cout << "Memory address of arr: " << ptr << endl; 

	return 0; 
}
