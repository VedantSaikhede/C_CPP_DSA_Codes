

//8. Write a program to check whether a given number is a Prime number or not Prime numbers from 1 to 100 are 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97.

#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the value-");
    scanf("%d",&n);
    if(n==2 || n==3 || n==5 || n==7)
        printf("%d is Prime Number ",n);
    else
        if(n%2==0 || n%3==0 || n%5==0 || n%7==0 )
        printf("%d is NOT a Prime Number",n);
    else
        printf("%d is Prime Number",n);

    return 0;
}

