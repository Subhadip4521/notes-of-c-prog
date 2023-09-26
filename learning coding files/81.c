//1. WAP IN C TO PRINT -
//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5

#include<stdio.h>

int main()
{
   int i,j=0,rows,space,count=0,count1=0;
    
    printf("The number of rows: ");
    scanf("%d",&rows);
    
    for(i=1; i<=rows; i++){
        for(space=1; space<=(rows-i); space++){
            printf(" ");
            count++;
        }
            while(j!=(2*i-1)){
                if(count<=rows-1){
                    printf("%d",i+j);
                    count++;
                }
                else{
                    count1++;
                    printf("%d",(i+j-2*count1));
                }
                j++;
            }
            count1=count=j=0;
            printf("\n");
    }
    return 0;
}