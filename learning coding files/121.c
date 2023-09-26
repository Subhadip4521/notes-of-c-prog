//Write a C Program to sum of all the elements of an array by the concept of pointer.

#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5}, sum=0;
    int *ptr;
    ptr=arr;
    for(int i=0; i<5; i++){
        printf("The values in array is %d\n",*(ptr+i));
        sum=sum+*(ptr+i);
    }
    
    printf("The sum of the values is %d", sum);

    return 0;
}
