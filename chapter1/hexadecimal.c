#include <stdio.h>

int main()
{
    /*
    C has a unique way of representing hexadecimal numbers,
    any number if begins using "0x" is perceived as hexadecimal in c,
    for example
    int a = 0x10; -> is actually 16 cause it is read as hex10
    0x10 -> 1* (16^1) + 0 * (16^0) = 16 

    but int a = 10; is perceived as binary number 10

    hexadecimals are usefull for low level programming,
    where we might need to represent binary numbers
    instead of using long binary strings like
    0000 0001 we use short hexadecimal notations like 0x01

    notice we can store hexadecimal within an int which means it is fundamentally an integer
    */

   int a = 0x12;
   int hex = 0xffff;
   printf("%d",hex);


    return 0;
}