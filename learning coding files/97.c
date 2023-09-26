#include<stdio.h>
int great(int x,int y,int z);//user defiend function
int main(){
printf("greatest num of three is :%d\n",great(7,6,5));
printf("greatest num of three is :%d\n",great(9,3,10));
printf("greatest num of three is :%d\n",great(14,9,25));
printf("greatest num of three is :%d\n",great(34,55,9));
printf("greatest num of three is :%d\n",great(33,24,55));
return 0;
}
int great(int x,int y,int z){
    int large;
    if(x>y&&x>z)
    large=x;
    else if (y>x&&y>z)
    large=y;
    else 
    large=z;
    return large;
}