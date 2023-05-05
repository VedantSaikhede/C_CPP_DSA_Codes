


//7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the value-");
    scanf("%d",&n);
    for(i;n>0;i++)
        n=n/10;
    printf("Total number of digit is %d",i);
    return 0;
}
