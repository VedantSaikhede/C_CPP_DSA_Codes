

//5. Write a program to check whether a given number is a three-digit number or not


#include<stdio.h>
int main()
{
    int n,i,a;
    printf("Enter a number -");
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n;i++)
    {
        n=n/10;
        if(n==0)
            break;

    }
    if(i==3)
        printf("%d is Three digit number",a);
    else
        printf("%d is NOT three digit number",a);

    return 0;
}
