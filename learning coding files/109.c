#include <stdio.h>

int main()
{
    int i=3;
    int *j,**k;
    j=&i;
    k=&j;
    printf("value of i is %d\n",i);
    printf("value of i is %d\n",*(&i));
    printf("address of i is %u\n",&i);
    printf("address of j is %u\n",&j);
    printf("value of j is %u\n",j);
    printf("value of *j is %d\n",*j);
    printf("value of j is %u\n",*k);
    printf("address of i is %u\n",*k);
    printf("address of k is %u\n",&k);
    printf("value of k is %u\n",k);
    printf("address of j is %u\n",k);
    printf("value of i is %d\n",**k);
    return 0;
}
