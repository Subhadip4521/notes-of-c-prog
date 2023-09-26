
#include <stdio.h>
#include <string.h>

int main()
{
    char st1[50]="SUBHADIP ";
    char st2[50]="DAS";
    
    strcat(st1, st2);
    printf("Now my name is: %s",st1);

    return 0;
}
