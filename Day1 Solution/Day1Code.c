/* Program: TechGig Day 1 Challenge - Print String Using C Programming Language.
Date: Saturday, 16-01-2021
@author: Ankur Saxena
Platform:Windows 10 Pro/x64/gcc 8.1/Atom Text Editor
*/

//program start

#include <stdio.h> //c header file
#include <stdlib.h>

int main(){ //main function

  system ("cls"); // it clear the console screen

  //declare a variable named 'in_str' to hold our input
  char in_str [125];

  //read a full line of input from stdin and save it to our variable, 'in_str'
  scanf ("%[^\n]", in_str);

  //print a string literal saying "Hello Techgig" to stdout using c 'printf()' command
  printf ("Hello Techgig\n");

  //print the line
  printf ("%s", in_str);

  return 0;
}

//program end

/*
Save this file as 'Day1Code.c'
Compile: $ gcc Day1Code.c -o Day1Code [press Enter]
Execute: $ Day1Code [press Enter]
Output:

I am coming back to the race.
Hello Techgig
I am coming back to the race.
*/
