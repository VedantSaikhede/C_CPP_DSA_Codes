

//9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int dig(int,int);
int main()
{
    int n,d,z;
    printf("Enter the number-");
    scanf("%d",&n);
    printf("Enter a digit which we want to check- ");
    scanf("%d",&d);
    z=dig(n,d);
    if(z==0)
        printf("\nNO !!");
    else
        printf("\nYESSS !!!");
    return 0;

}
int dig(int n,int d)
{
    int t;
    for(;n>0;)
    {
        t=n%10;
        if(t==d)
           {
               return 1;
               break;
           }

        else
                n=n/10;


    }
    if(n==0)
        return 0;
}
