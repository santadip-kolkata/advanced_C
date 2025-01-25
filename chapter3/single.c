#include <stdio.h>

int main(){
    // anonymous block
    int b=10;
    {
        int a = 4;
    }
    // printf("%d",a); // will give an error since a is not defined within this scope
    printf("%d",b);
}
