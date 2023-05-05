

//6. Write a program to calculate factorial of a number


#include<stdio.h>
int main()
{
    int n,s=1;
    printf("Enter a value of n-");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
        s=i*s;
    printf("Factorial of %d is %d",n,s);
    return 0;

}
