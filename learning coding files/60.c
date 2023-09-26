//print the pattern
//*
//**
//***
//****
//****
//***
//**
//*

#include <stdio.h>

int main()
{
    int i,j,k,row;
    printf("Enter number of rows you want to print: ");
    scanf("%d",&row);
    
    for(i=1; i<=row; i++)
    {
    for(j=1; j<=i; j++)
    {
    printf("*");
    }
    printf("\n");
    }
    for(i=1; i<=row; i++)
    {
    for(k=row; k>=i; k--)
    {
    printf("*");
    }
    printf("\n");
    }
    
    return 0;
}