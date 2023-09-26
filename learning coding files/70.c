//reverse the numbers

#include <stdio.h>

void reverse(int *arr, int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp= arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int a[]={5,8,3,4,6};
    reverse(a,5);
    for(int i=0; i<5; i++){
        printf("The value of  number %d is %d\n ",i+1,a[i]);
    }
    return 0;
}
