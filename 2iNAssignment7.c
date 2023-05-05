

//7. Write a program to find the position of first 1 in LSB


#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=n&255;
    if(a%2==0)
        printf("The first 1 is at 2nd place");
    else
    printf("The first 1 is at 1st place");

    return 0;



}
