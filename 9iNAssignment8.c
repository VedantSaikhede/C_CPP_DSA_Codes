/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

#include<stdio.h.>
int main()
{
    int n,t=0;
    printf("Enter any number>");
    scanf("%d",&n);
    if(n>0)
        t=1;
    else
        t=2;
    switch(t)
    {
    case 1:
        printf("It's Negative is %d",n-2*n);
        break;
    case 2:
        printf("It's Positive is %d",n+2*(-n));
        break;
    case 0 :
        printf("It is ZERO");
    }
    return 0;
}
