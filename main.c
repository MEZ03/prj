#include <stdio.h>
#include <stdlib.h>

int main()
{

    sayHi("issam");
    return 0;
}

void sayHi(char name[]){
    printf("hello %s", name);
}
