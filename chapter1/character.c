#include <stdio.h>



int main()
{
/*
in context of a computer , a character is basically an integer between the range 0-255
a computer remembers a character in the form of ASCII in its memory, so when we say 'A'
it is basically stored as 65 {the value assigned to A as per the ascii table}
all characters present in a typical keyboard are given a precise value as per the ascii table
and the computer remembers them as such.

now in C, a character is represented by the char datatype
the size of the datatype is 1 byte
*/

char c = 'A';
printf("%c\n",c); // inorder to print the character we use the type specifier %c
printf("%c --> %d\n",c,c); //notice that i am using %d and the second argument is c
/*what c does is automatically gives the integer equivalent of 'A' from the ascii table*/

//RUN THE 'print_ascii' BINARY TO SEE THE FULL ASCII TABLE, you will understand the code later in the chapter
return 0;
}
