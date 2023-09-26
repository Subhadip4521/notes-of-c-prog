
#include <stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char name1[30];
    char name2[30];
    int slry1=500,slry2=800;
    
    printf("Enter name and salary of 1st person: ");
    scanf("%s%d",&name1,&slry1);
    printf("Enter name and salary of 2nd person: ");
    scanf("%s%d",&name2,&slry2);
    
    ptr= fopen("slry.txt","w");
    
    fprintf(ptr,"The name and salary of the 1st person is %s and %d\n",name1,slry1);
    fprintf(ptr,"The name and salary of the 2nd person is %s and %d\n",name2,slry2);
    fclose(ptr);
    
    return 0;
}
