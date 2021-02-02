/*
Program: Techgig Day2 Coding Challenge : Exploring Data Types (100 Marks)
Date: Monday, 16-11-2020
@author: Ankur Saxena
Platform: Linux Ubuntu 18.04 Lts/x64/Jdk 8/Atom Text Editor
*/

/*
 * Enter your code here. Read input from STDIN. Print your output to STDOUT.
 * Your class should be named CandidateCode.
 Exploring Data Types (100 Marks)
For this challenge, you need to read a line from stdin and check whether it is of type integer, float or string.
If input is-
    Integer print 'This input is of type Integer.' to the stdout
    Float print 'This input is of type Float.' to the stdout
    String print 'This input is of type string.' to the stdout
    else print 'This is something else.' to the stdout.
Input Format
A single line to be taken as input as save it to a variable(name of your choice).
Constraints
1 < |s| < 10000
Output Format
Print the text according to the data type you get as an input.
Sample TestCase 1
Input
-32767
Output
This input is of type Integer.
*/

//Program 1: Using Java 8
//Using Java Scanner Class

//program start
import java.util.Scanner; //java package

public class Day2Java {
    public static void main(String args[] ) {

    	//creating new java scanner object
        Scanner sc = new Scanner(System.in);

        if (sc.hasNextInt())
        {
            System.out.print("This input is of type Integer.");
        }

        else if (sc.hasNextFloat())
        {
            System.out.print("This input is of type Float.");
        }

        else if (sc.hasNextLine())
        {
            System.out.print("This input is of type string.");
        }

        else
        {
            System.out.print("This is something else.");
        }
    }
}
//program end

/*
Save this file as 'Day2Java.java'
Compile: $ javac Day2Java.java [press Enter]
Execute: $ java Day2Java [press Enter]
Input:
-32767
Output:
This input is type of Integer.
*/
