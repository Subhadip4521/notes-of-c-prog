
#include <stdio.h>
#include <string.h>

int main()
{
    char source[]="SUBHA";
    char target[50];
    
    strcpy(target, source);
    printf("Now the target is: %s",target);

    return 0;
}
