#include <stdio.h>

int main()
{
    /*
    The bitwise operators in C, are used for performing bitwise operation
    like bitwise AND, OR, NOT and Shift Wise Operators

    | -> performs the bitwise or operation
    & -> performs the bitwise and operation
    ~ -> performs the bitwise not operation
    ^ -> performs the bitwise xor operation
    */

    int a=4;
    int  b=8;

   printf("%d\n",a | b); // a or b  0 1 0 0 | 1 0 0 0 -> 1 1 0 0 
   printf("%d\n",a & b); // a and b 0 1 0 0 & 1 0 0 0 -> 0 0 0 0
   printf("%d\n",~a); // not a 0 1 0 0 -> 1 0 1 1
   printf("%d\n",a^b); // a xor b -> 0100 ^ 1000 ->  1 1 0 0 

   printf("%d\n",a<<b);
   /*
   shifts the bit of a (0 1 0 0) by 8 bits -> 1 0 0 0 0 0 0 0 0 0 0 
   */ 
}