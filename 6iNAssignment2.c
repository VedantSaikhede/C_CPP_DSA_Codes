

//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a value of n-");
    scanf("%d",&n);
    for(int i=2;i<=n*2;i+=2)
        s=s+i;
    printf("Sum of first %d even natural number is %d",n,s);
    return 0;

}
