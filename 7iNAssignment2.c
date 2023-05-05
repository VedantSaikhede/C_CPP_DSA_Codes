


//2. Write a program to print first N terms of Fibonacci series.

#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    printf("Enter the number_");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        printf("%d\n",c);
        c=a+b;
        b=a;
        a=c;


    }

    return 0;
}
