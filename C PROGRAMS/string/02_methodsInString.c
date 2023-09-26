// strlen, strcpy, strcat, strcmp
#include <stdio.h>
#include <string.h>
int main()
{
    char city[] = "New York";
    int len = strlen(city);
    // point to be noted that the strlen will count the length excluding the null character
    printf("The length of the string is %d\n", len);

    char status[50];
    strcpy(status, city);
    printf("Now I am in %s\n", status);

    char status2[] = "I was in ";
    strcat(status2, city);
    printf("%s\n", status2);

    char name01[] = "subha";
    char name02[] = "subhadip";
    int diff = strcmp(name01, name02);
    printf("%d", diff); // It will give negative return due to the comparisn between 0 and d

    return 0;
}