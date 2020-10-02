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
	do
	{
		cout<<"Enter a number between 1-10: ";
		cin>>num;
		int factorial(int num);
		{
   			int factorial = 1;
   			int i;
   			for (i = 1; i <= num; i++);
   			{
      			factorial = factorial * i;
   			}
}
	}while(num >= 1 && num <=10);
	cout<<"The factorial for "<< num <<" is "<< factorial;

	return 0;
}