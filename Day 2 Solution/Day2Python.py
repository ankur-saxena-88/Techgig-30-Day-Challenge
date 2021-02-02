# Techgig Day 2 Coding Challenge: Exploring Data Types.
# Program: Exploring Data Types Using Python 3
# Date: Friday, 29-11-2020
# @author: Ankur Saxena
# Platform: Linux Mint 18/x64/Python 3.8/Atom Text Editor

# Program start

def main():
    str=input()
    if str.isalpha():
        print("This input is of type string.",end='')
    elif str.isnumeric():
        print("This input is of type Integer.",end='')
    elif str.rfind('.')!=-1:
        try:
            str=float(str)
            print('This input is of type Float.',end='')
        except:
            print("This input is of type string.",end='')
    elif str[0]=='-':
        print("This input is of type Integer.",end='')
    else:
        print('This is something else.',end='')
main ()

# Program end

# Save this file as "Day2Python.py"
# Execute: $ python38 Day2Python.py [hit Enter]
# Output:
# -32767
# This input is of type Integer.
