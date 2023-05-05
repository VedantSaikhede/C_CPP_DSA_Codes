


//6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("BOTH ARE SAME ");
    else
    {
        if(a>b)
            printf("%d is greater than %d",a,b);
        else
            printf("%d is greater than %d",b,a);
    }



}
