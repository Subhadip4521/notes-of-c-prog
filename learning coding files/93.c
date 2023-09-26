
#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    float marks;
    char name[20];
};

int main()
{
    int roll;
    float marks;
    char name;
    
    struct student s1;
    s1.roll=37;
    s1.marks=97.10;
    strcpy(s1.name,"Subha");
    
    printf("%d\n",s1.roll);
    printf("%.2f\n",s1.marks);
    printf("%s\n",s1.name);
    
    return 0;
}
