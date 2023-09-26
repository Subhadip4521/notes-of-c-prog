
#include <stdio.h>

void printarray(int a[], int n){
for(int i=0; i<n; i++){
    printf("the value of %d is %d\n",i+1,a[i]);
}
}
int main()
{
    int a[]={1,2,3,4,5};
    printarray(a,5);
    return 0;
}
