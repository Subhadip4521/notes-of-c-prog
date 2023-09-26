// multiplication table by creating a text file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    char c;
    printf("Enter the number for which you want multiplication table: ");
    scanf("%d",&num);
    
    ptr=fopen("table.txt","w");
    
    c= fgetc(ptr);
    fprintf(ptr,"Your multiplucation table:\n");
    for(int i=1; i<=10; i++){
        fprintf(ptr, "%dx%d=%d\n",num,i,(num*i));
    }
    printf("Your multiplication table has been created successfully in table.txt file.");
    fclose(ptr);

    return 0;
}
