


//6. Write a program to print all Prime numbers under 100


#include <stdio.h>
int main()
{
    int a=0,n=0,i=1,b=1;
    while(n<25)
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
            n++;
        }
        i++;
        }
return 0;
}
