//Write a C program to print an inputted array of size 5 then print it using pointer notation.

#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5}, sum=0;
    int *ptr;
    ptr=arr;
    for(int i=0; i<5; i++){
        printf("The values in array is %d\n",*(ptr+i));
    }
    return 0;
}