// This is a sample C Program --------> This is Document section

// #include <stdio.h>  //-------------|--> This is the link Section
// #include <conio.h>  //-------------|

// void fun(); //--------------> This is the Definition Section

// int a = 10; //--------------> This is the Global Declaration Section

// void main() //-------------------------------------------------|
// { //                                                           | 
//     printf("a value inside main(): %d", a); //                 |-----> This is the main function section
//     fun(); //                                                  |
// } //-----------------------------------------------------------|

// void fun() //--------------------------------------------------|
// { //                                                           |
//     printf("\na value inside fun(): %d", a); //                |-----> This is the user defined function section
// } //-----------------------------------------------------------|



// Another C program 

#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Hello World");
    getch();
    return 0;
}

// getch() functions holds up the output window after printing all the output to allow user to see the final output and the window didn't close immediately after printing the output.
// User can press any key to exit the output window afterwards he hass seen the output.




// include means adding the files in the current file
// We have to include the files beacuse the files contain the declaration of functions and we have to use those functions in our program
// #include <stdio.h> means adding the contents of stdio.h file in the current file
// stdio.h is a header file which contains the declaration of printf() function

/* 

Structure of a C Program:

1) Document Section [used for comments]

2) Pre-Processor Section [used for including files]

3) Definition Section [used for defining constants]

4) Global Declaration Section [used for declaring global variables]

5) Main Function Section [used for writing the main program]
    main(){ -------------------------|
        Declaration Section          |----> Scope of the main function
        Executable Section           |      All the work of input, output and processing is done here
    }--------------------------------|
    Functions Precedence:
    main() -> user defined functions -> library (in-built) functions
    main --> is the reserved keyword in C programming language
    main() --> is the main function of the program

6) Sub-Program Section (User Defined Function Section) [used for defining user defined functions]
    Any user-defined functions should be defined either before or after the main function, should not be inbetween the main function
    But usually we define any user defined function after the main functions

*/


/* 

1) Keywords
2) Identifiers
3) Variables

Data Types:

Primitive Data Types:
1) int
2) float
3) char
4) double
5) void
6) Long int

Derived Data Types:
1) Array
2) Pointer
3) Function

User Defined Data Types:
1) Structure
2) Union
3) Enum


1) int:

Size of int is 2 bytes
Range of int is -32768 to 32767
total 65535 numbers that is (2^16)-1


*/

// In case of logical operators (&&, ||, !), the associativity is from left to right.
// In case of bitwise operators (&, |, ^), the associativity is from left to right.
// In case of assignment operators (=, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=), the associativity is from right to left.

