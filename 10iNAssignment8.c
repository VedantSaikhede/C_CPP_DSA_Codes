

/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS) P*/


#include<stdio.h>
int nPr(int,int);
int fac(int);
int main()
{
    int n,r,z;
    printf("Enter the values of n and r-");
    scanf("%d%d",&n,&r);
    z=nPr(n,r);
    printf("Value of %dC%d is %d",n,r,z);
    return 0;
}
int nPr(int n,int r)
{
    return (fac(n))/(fac(n-r));

}
int fac(int n)
{

    if(n==0)
        return 1;
    return n*fac(n-1);

}
