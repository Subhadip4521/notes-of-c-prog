
#include <stdio.h>

void decrypt(char *st){
char *ptr=st;
while(*ptr!= '\0'){
    *ptr=*ptr-1;
    ptr++;
}
}
int main()
{
    char st[]="TVCIB";
    decrypt(st);
    
    printf("The decrypted form is : %s",st);

    return 0;
}
