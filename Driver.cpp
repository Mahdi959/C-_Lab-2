// For this lab, you need to write the prototypes and definitions
// for 2 functions, 'Swap' and 'larger', that are used in the main function
// DO NOT CHANGE ANYTHING IN THE MAIN FUNCION
// Also, replace these comments with Your Name, My name, the date and the lab
// and change the name of this file to Lab2


#include<iostream>
using namespace std;

// function prototypes go here

int main()
{
	int *num1ptr, *num2ptr;
	 
	num1ptr = new int;
	num2ptr = new int;

	cout << "Please enter 2 integers: ";
	cin >> *num1ptr >> *num2ptr;

	cout << "You entered " << *num1ptr << " and " << *num2ptr << endl;

	// the call to the Swap function
	Swap(num1ptr, num2ptr);

	cout << "After Swapping, the values are " << *num1ptr << " and " << *num2ptr << endl;
	
									//the call the the 'larger' function
	cout << "The larger of the 2 values is: " << *larger(num1ptr, num2ptr) << endl;
	return 0;
}

// function definitions go here