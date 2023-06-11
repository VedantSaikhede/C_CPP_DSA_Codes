

/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS) C */

#include<stdio.h>
int nCr(int,int);
int fac(int);
int main()
{
    int n,r,z;
    printf("Enter the values of n and r-");
    scanf("%d%d",&n,&r);
    z=nCr(n,r);
    printf("Value of %dC%d is %d",n,r,z);
    return 0;
}
int nCr(int n,int r)
{
    return (fac(n))/((fac(r))*(fac(n-r)));

}
int fac(int n)
{

    if(n==0)
        return 1;
    return n*fac(n-1);

}
