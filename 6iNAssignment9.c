

//9. Write a program to calculate LCM of two numbers

#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter two Numbers ");
    scanf("%d %d",&a,&b);
    if(a>b)
        c=a;
    else
        c=b;
    while(1)
    {
        if((c%a==0) && (c%b==0))
        {
            printf("LCM of %d and %d is %d",a,b,c);
            break;
        }
        ++c;
    }
    return 0;
}
