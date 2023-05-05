

//2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number -");
    scanf("%d",&n);
    printf("unit digit of given number is %d",n/10);
    return 0;
}
