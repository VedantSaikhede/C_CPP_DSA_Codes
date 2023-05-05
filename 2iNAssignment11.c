

//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number
#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter two number -");
    scanf("%d%d",&n,&a);
    printf("%d",(n*10)+a);
    return 0;
}
