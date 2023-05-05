
//7. Write a program to print all Prime numbers between two given number

#include <stdio.h>
int main()
{
    int a=0,n=0,i,b=1,n1,n2;
    printf("Enter two Number: ");
    scanf("%d %d",&n1,&n2);
    i=n1;
    while(n1<n2 && n2>i)
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
        }
        i++;
        }
return 0;
}
