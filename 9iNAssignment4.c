

/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */

#include<stdio.h>
int main()
{
    int n=0,a,b,c;
    for(;n!=4;)
    {
        printf("\nEnter Three Numbers-");
        scanf("%d%d%d",&a,&b,&c);
        printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("4. EXIT \n");
        printf("SELECT ONE OPTION-");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            if(a==b)
                printf("ISO ");
            else
            if(b==c)
            printf("ISO ");
            else
                if(a==c)
                printf("ISO ");
            else printf("NOT ISO ");
            break;
        case 2:
            if(a*a+b*b==c*c)
                printf("RIGHT ");
            else
                if(a*a+c*c==b*b)
                printf("RIGHT ");
            else
                if(b*b+c*c==a*a)
                printf("RIGHT ");
            else
                printf("NOT RIGHT ");
            break;
        case 3:
            if(a=b)
                if(b==c)
                printf("EQL");
                else
                if(a==c)
                   if(c==b)
                      printf("EQL");
                else
                printf("NOT EQL");
            break;
        case 4:
            printf("\nEXIT SUCESSFULLYYY !!!");


        }


    }
    return 0;

}
