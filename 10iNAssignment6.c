

//6. Write a function to calculate the factorial of a number(TSRS)

#include<stdio.h>
int fac(int);
int main()
{
    int n,z;
    printf("Enter a Number-");
    scanf("%d",&n);
    z=fac(n);
    printf("Factorial of %d is %d",n,z);
    return 0;
}
int fac(int n)
{

    if(n==0)
        return 1;
    return n*fac(n-1);

}

