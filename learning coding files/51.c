//recurtion for the sum of first 10 natural numbers

#include<stdio.h>
int num(int a);
int main()
{
    int n=1;
    
    printf("The sum is %d\n",num(n));
    
    return 0;
}
    int num(int a){
        if(a!=10){
        return a+num(a+1);
        }
        else{
            return a;
        }
    }