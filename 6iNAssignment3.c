


//3. Write a program to calculate sum of first N odd natural numbers


#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a value of n-");
    scanf("%d",&n);
    for(int i=1;i<=(n*2)-1;i+=2)
        s=s+i;
    printf("Sum of first %d odd natural number is %d",n,s);
    return 0;

}
