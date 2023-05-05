

//10. Write a program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the number - ");
    scanf("%d",&n);
    a=n%10;
    printf("The desired output is %d",n-a);
    return 0;
}
