/* Program: TechGig Day 1 Challenge - Print String Using CPP Programming Language.
Date: Saturday, 16-01-2021
@author: Ankur Saxena
Platform:Windows 10 Pro/x64/gcc 8.1/Atom Text Editor
*/

//program start

#include <iostream> // cpp header file
#include <stdlib.h>

using namespace std;

int main (){ //main function

  //declare a variable named 'in_str' to hold our input
  string in_str;

  system ("cls"); // it is used for clear the console screen

  // read a full line of input from stdin (cin) and save it to our variable, 'in_str'
  getline (cin, in_str);

  //print a string literal saying "Hello Techgig" to stdout using cout
  std::cout << "Hello Techgig" << std::endl;

  // print the line
  std::cout << in_str;

  return 0;
}

/*
SAve this file as 'Day1Cpp.cpp'
Compile: $ g++ Day1Cpp.cpp -o Day1Cpp [press Enter]
Execute: $ Day1Cpp [press Enter]
Output:

I am coming back to the race.
Hello Techgig
I am coming back to the race.
*/
