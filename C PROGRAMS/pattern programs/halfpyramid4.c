// A
// A A
// A A A
// A A A A
// A A A A A
#include<stdio.h>

int main(){
    int i,j,row;
    char alpha='A';
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            printf("%c ",alpha);
        }
        printf("\n");
    }
    return 0;
}