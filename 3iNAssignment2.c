

//2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n%10==0 || n%10==5)  //OR if(n%5==0)
        printf("DIVISIBLE BY 5");
    else
        printf("NOT ");
    return 0;
}
