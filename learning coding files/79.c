//2. WAP IN C TO PRINT –
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *

#include<stdio.h>
int main()
{
    int i,j,k,space;
    char a;
    for(i=5;i>=1;i--)
    {
    	for(space=(5-i);space>=1;space--)
    	   printf(" ");
    	   a='*';
    	   for(j=i;j>=1;j--)
    	   printf("%c",a);
    	   for(j=i;j>1;j--)
    	   printf("%c",a);
   	   printf("\n");
	}
    

    return 0;
}