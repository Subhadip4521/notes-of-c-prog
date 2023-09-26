
#include <stdio.h>

void encrypt(char *st){
char *ptr=st;
while(*ptr!= '\0'){
    *ptr=*ptr+1;
    ptr++;
}
}
int main()
{
    char st[]="SUBHA";
    encrypt(st);
    
    printf("The encrypted form is : %s",st);

    return 0;
}

