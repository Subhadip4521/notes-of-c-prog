#include <stdio.h>
#include <string.h>
int main()
{
 char str1[30],str2[30];
 printf("Enter first string: ");
 gets(str1);
 printf("Enter second string: ");
 gets(str2);
 if(strcmp(str1,str2)==0)
 printf("Both strings are equal");
 else
 printf("Strings are unequal");
 return 0;
}
