/*9. Program to Convert even number into its upper nearest odd number
Switch Statement.

*/

#include<stdio.h>
int main()
{
    int n,t=03;
    printf("Enter any number-");
    scanf("%d",&n);
    if(n%2)
        t=1;//odd
    else
        t=2;//even
    switch(t)
    {
    case 1:
        printf("given number is ODD ");
        break;
    case 2:
        printf("Upper nearest odd number is %d",n+1);
    }
}
