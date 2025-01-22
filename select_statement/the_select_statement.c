#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

/* timed read line*/
char *time_read_line(int timeout)
{
static char buffer[512];
fd_set rfds;
struct timeval tv;
int ret;

FD_ZERO(&rfds);
FD_SET(0,&rfds);

tv.tv_sec=timeout;
tv.tv_usec = 0;

ret = select(1,&rfds,0,0,&tv);
if(ret && FD_ISSET(0,&rfds))
{
memset(buffer,0,512);
ret = read(0,buffer,511);
if(ret < 1)
{
	return 0;
}
ret--;
buffer[ret]=0;
return buffer;
}
else
{
return 0;
}
}


int main()
{
char *name;
printf("Enter your name:- \n");

name = time_read_line(5);
if(name)
{
printf("Hello %s\n",name);
}
else
{
printf("You are too slow providing an input");
}
return 0;
}
