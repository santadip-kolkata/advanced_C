#include <stdio.h>

int main()
{

/*
The integer data type is represented by int, and it can store whole numbers both positive and negative
it basically means that it is signed by default
*/

int positive = 5;
int negative = -3;

/*
in a 64 bit architecture integer occupies 4 bytes
while in 32bit architecutre it occupies 2 bytes
we have an operator called the sizeof(), which provides the sizeof a datatype as an output
*/

printf("size of an int --> %zu\n",sizeof(positive)); // we are using %d since the size is returned in bytes which can be represented as integer
/*for now ignore the zu just see that the output returns 4*/

/*
we can reduce or increase or decrease the size of integer
by using  "modifiers" short or long, they can be used before the data type
*/

short int small = 5;
long int large = 66597456;

printf("size for short int --> %zu\n",sizeof(small));
printf("size for long  int --> %zu\n",sizeof(large));

/*
we can set the integer to be signed and unsigned as well
basically unsigned integer as more range , since it excludes the negative and 
starts from 0
*/

unsigned int unisign = 12346;
/* we can combile the modifiers*/


unsigned short int usi;
unsigned long int uli; // like this





return 0;
}

