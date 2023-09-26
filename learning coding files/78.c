//4. WAP IN C TO PRINT FIBONACCI SERIES USING WHILE LOOP.

#include <stdio.h>
int main() {
    int i=0, n, t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1,t2);

    while(i <(n-2)) {
    	i++;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}