

//8. Write a program to find next Prime number of a given number


#include <stdio.h>
int main()
{
    int a=0,n=0,i,b=1,n1,n2;
    printf("Enter two Number: ");
    scanf("%d",&n1);
    i=n1;
    while(1)
    {
        a=0;
        b=1;

        while(b<=i)
        {
            if(i%b==0)
            a++;
            b++;
        }
        if(a==2)
        {
            printf("%d ",i);
            n1++;
            break;
        }
        i++;
        }
return 0;
}
