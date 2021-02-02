/*
Program: Techgig Day 2 - Exploring Data Types Using CPP.
Date: Friday, 29-11-2020
@author: Ankur Saxena
Platform: Linux Mint 18.04/x64/gcc 5.0/VS Code Text Editor
*/

//Program start

#include <iostream> //Cpp header file
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() //Main function
{ 
    const int num = 100;
    char input[num] = ""; //Input
	double num_value;
	long int int_value; 
	char str[num] = "";
	
	system ("clear"); //Clear the console screen

	//Using 'fgets()' command
	fgets(input, 100, stdin);

	// Check for integer or float
	if (sscanf(input, "%lf", &num_value) == 1) 
	{ 
		int_value = (long int)num_value;
		if (fabs(num_value - int_value) != 0)
			std::cout << "This input is of type Float.";	 
		else
			std::cout << "This input is of type Integer.";		 
	} 
	// Check for string 
	else if (sscanf(input, "%s", str) == 1)	 
		std::cout << "This input is of type string."; 
	else
		std::cout << "This is something else.";

	return 0; 
} 

//Program end

//Save this file as "Day2.cpp"
//Compile: $ g++ Day2.cpp -o Day2 [hit Enter]
//Execute: $ ./Day2 [hit Enter]

/*
Outout:

-32767
This input is of type Integer.
*/
