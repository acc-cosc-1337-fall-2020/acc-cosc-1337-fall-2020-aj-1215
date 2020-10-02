//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	int fac;
	do
	{
		cout<<"Enter a number between 1-10: ";
		cin>>num;
		fac = factorial(num);
		cout<<"The factorial for "<< num <<" is "<< fac;
	}while(num >= 1 && num <=10);
	

	return 0;
}