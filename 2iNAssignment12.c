

//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD..

#include<stdio.h>
int main()
{
    double n,a;
    printf("Enterthe amount in INR(rs)-");
    scanf("%lf",&n);
    printf("%lfrs in USD is %lf  ",n,n/76.23);
    return 0;
}
