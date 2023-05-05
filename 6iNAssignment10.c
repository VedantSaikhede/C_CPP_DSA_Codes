


//10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int a;
    int n,b,v;
    printf("Enter the value of n-");
    scanf("%d",&n);
    v=n;
    printf("Reverse of %d is ",v);
    for(int i=0;n>0;i++)
    {
        b=n%10;
        a=b;
        n=n/10;
        printf("%d",a);


    }



    return 0;
}
