//  Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main()
{
    int i;

    for(i=0;i<20;i++)
    {
        if(i%2 == 0)
        {
            printf("\n%d",i);
        }
    }

    return 0;
}