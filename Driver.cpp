// For this lab, you need to write the prototypes and definitions
// for 2 functions, 'Swap' and 'larger', that are used in the main function
// DO NOT CHANGE ANYTHING IN THE MAIN FUNCION
// Mahdi Ashrafee, Andrew, June 2, 2022



#include<iostream>
using namespace std;

// function prototypes go here
void Swap(int*,int*);
int* larger(int* first,int* last);
//main
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
	cout << "The larger of the 2 values is: " <<*larger(num1ptr, num2ptr) << endl;
	return 0;
}

// function definitions go here
void Swap(int *first,int *last){
	int temp;
	temp = *first;
	*first = *last;
	*last = temp;
	
}
int* larger(int *first, int *last){

	if(*first > *last)
		return first;
	else
		return last;	
	
}