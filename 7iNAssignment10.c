


//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()

{
    int i=0,a,j,d=0,s=0,z,n;
    for(int z=0;z<=1000;z++){

    i=0;
    d=0;
    s=0;
    n=z;
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
            printf("%d ",z);}

        return 0;

}
