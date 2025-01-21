/*
The standard header contains a lot of basic definition of functions such as scanf(), or printf()
which are almost used in any program
NOTE: these are what we term as header libraries, they only contain macros, variables and function definitions,
they are linked with specific files where the implementaion of those functions are found
in a linux environment you can find the header files at /usr/include
and the implementation files in /usr/lib or at specific locations , in which case they are to be  explicitely 
provided to a compiler.
*/
#include <stdio.h>



/*
the main function is a requirement of every program, as it serves as the entry point of the program,
a program can contain mulitple link files, implementaion but they must have some form of "main"
this is a typical definition which returns an integer (as it has a return type of int)
*/
int main()


/*
the below lines are what we call a block, basically group of instructions enclosed within {}
they are used such that a group of instructions can be stacked together, they would be usefull
in coordiation to consructs such as  if / else or for
*/
{
printf("Hello world\n");
return 0; // marks the end of the function after a value is returned
printf("not of any use"); // after a function is returned the code below it is never executed
}


/*
have a look at the compile_command.sh run the command mentioned there to execute this code
or type ./compile_command.sh
*/
