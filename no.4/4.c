//  Write a program to print the first 10 odd natural numbers

#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=20;i++)
    {
        if(i%2 == 1)
        {
        printf("\n%d",i);
        }    
    }

    return 0;
}