

//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int n,a,s=0;
    printf("Enter the three digit number ");
    scanf("%d",&n);
    for(int i=0;i<=2;i++)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    }
    printf("Sum of all digit is %d",s);
    return 0;
}

