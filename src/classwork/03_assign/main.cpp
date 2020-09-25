//Write the include statement for decisions.h here
#include<iostream>
#include "decision.h"
//Write namespace using statements for cout and cin

using std::cout;
using std::cin;

int main() 
{
	char letter_grade;
	int grade;
	cout<<"Enter numerical grade: ";
	cin>>grade;
	if (grade >= 0 && grade <= 100)
	{
		get_letter_grade_using_if(grade);
		get_letter_grade_using_switch(grade);
		return letter_grade;
	}
	else
	{
		cout<<"Invalid grade. Enter grade between 0-100.";
	}
	
	return 0;
}

