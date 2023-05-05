//9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
#include<math.h>
int main()

{
    int n,i=0,a=0,j,d=0,s=0,z=0;
    printf("Enter the value-");
    scanf("%d",&n);
    i=0,a=0,j,d=0,s=0,z=0;
    z=n;
    a=n;
    for(i;a>0;i++)
        a=a/10;
        for(j=0;j<=i;j++)
        {
            d=n%10;
            s=s+pow(d,i);
            n=n/10;
        }
        if(z==s)
            printf("%d is Armstrong Number",z);
        else
            printf("%d is NOT Armstrong Number ",z);
        return 0;

}
