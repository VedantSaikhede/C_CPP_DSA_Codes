
//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    printf("Enter the number_");
    scanf("%d",&n);
    for(int i=0;i<=n-2;i++)
    {
        c=a+b;
        b=a;
        a=c;

    }
    printf("%dth Term is %d",n,c);
    return 0;
}











