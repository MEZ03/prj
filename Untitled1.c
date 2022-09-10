#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("enter your grade: "); scanf("%s", &grade);
    switch(grade){
    case 'a':
        printf("you failed");
        break;
    case 'b':
        printf("you did good");
        break;
    }


    return 0;
}
