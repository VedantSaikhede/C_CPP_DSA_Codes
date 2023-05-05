


//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the value of A,B and C ,where Ax^2+Bx+C=0  ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if((b*b-4*a*c)>0)
        printf("ROOTS ARE REAL AND UNIQUE");
    else
    {
        if((b*b-4*a*c)<0)
            printf("ROOTS ARE IMAGINARY");
        else
            printf("ROOTS ARE REAL AND EQUAL");
    }
    return 0;
}
