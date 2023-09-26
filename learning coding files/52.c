//print *if n=1,***if n=2;and so on
#include<stdio.h>
void print_pattern(int a);
int main()
{
    int n=4;
    print_pattern(n);
    
    return 0;
}
    void print_pattern(int a){
        if(a==1){
            printf("*\n");
            return;
        }
        print_pattern(a-1);
        for(int i=0;i<(2*a-1);i++){
            printf("*");
        }
        printf("\n");
    }