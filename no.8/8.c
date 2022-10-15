// Write a program to print squares of the first 10 natural numbers

#include<stdio.h>
int main()
{
    int i,n;

    for(i=1;i<=10;i++)
    {
        n=i*i;
        printf("\n%d",n);
    }

    return 0;
}