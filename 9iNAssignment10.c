

//10. C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2,img;
    printf("Enter the values of a,b,c of QE form ax2+bx+c=0\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nOur QE is %dx2+%dx+%d=0\n",a,b,c);
    d=b*b-4*a*c;
    switch(d>0)
    {
    case 0:
        switch(d<0)
        {
        case 0:
            r1=r2=-b/(2*a);
            printf("Roots are %f and %f",r1,r2);
            break;
        case 1:
            r1=r2=-b/(2*a);
            img=sqrt(-d)/(2*a);
            printf("Roots are %f ,%f and %f ",r1,r2,img);
            break;

        }
        break;
    case 1:
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are %f and %f",r1,r2);
        break;

    }


}
