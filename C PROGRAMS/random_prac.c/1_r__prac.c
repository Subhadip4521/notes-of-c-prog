
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
    
    struct student s1,s2,s3;
    
    
    printf("Enter the roll number of s1: ");
    scanff("%d", &s1.roll);
    printf("Enter the marks number of s1: ");
    scanff("%.2f", &s1.marks);
    printf("Enter the name of s1: ");
    scanff("%s", s1.name);

    printf("Enter the roll number of s2: ");
    scanff("%d", &s2.roll);
    printf("Enter the marks number of s2: ");
    scanff("%.2f", &s2.marks);
    printf("Enter the name of s2: ");
    scanff("%s", s2.name);

    printf("Enter the roll number of s3: ");
    scanff("%d", &s3.roll);
    printf("Enter the marks number of s3: ");
    scanff("%.2f", &s3.marks);
    printf("Enter the name of s3: ");
    scanff("%s", s3.name);
    
    // printf("%d",s1.roll);
    // printf("%.2f\n",s1.marks);
    // printf("%s",s1.name);

    // printf("%d",s2.roll);
    // printf("%.2f\n",s2.marks);
    // printf("%s",s2.name);

    // printf("%d",s3.roll);
    // printf("%.2f\n",s3.marks);
    // printf("%s",s3.name);
    return 0;
}
