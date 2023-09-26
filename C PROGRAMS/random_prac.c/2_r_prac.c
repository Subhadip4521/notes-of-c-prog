//
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float marks;
    char name[20];
};
int main(){
    struct student subha ={100,90.5,"SUBHA"};
    printf("%d\n",subha.roll);
    printf("%f\n",subha.marks);
    printf("%s\n",subha.name);

    return 0;
}