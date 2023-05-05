


//4. Write a program to calculate HCF of two numbers


#include <stdio.h>
int main()
{
    int a,b,i,c;

    printf("Enter two Number ");
    scanf("%d %d", &a, &b);

    for(i=1;i<=a && i<= b;++i)
        if(a%i==0 && b%i==0)
            c=i;

    printf("G.C.D of %d and %d is %d",a,b,c);
    return 0;
}
