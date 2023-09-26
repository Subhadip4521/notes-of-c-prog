//check the year leapyear or not//

#include<stdio.h>

int main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("the year %d is leapyear.\n",year);
    }
    else if(year%4==0 && year%100!=0){
        printf("the year %d is lepayear.\n",year);
    }
    else{
        printf("the year %d is not a leapyear.\n",year);
    }
    return 0;
}