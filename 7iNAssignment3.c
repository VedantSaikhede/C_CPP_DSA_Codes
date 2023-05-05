


//3. Write a program to check whether a given number is there in the Fibonacci series or not.


#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    printf("Enter the number- ");
    scanf("%d",&n);
    for(int i=0;i<=100;i++)
    {
        if(n==c)
            {
            printf("YES !!! Given number is there in fibonacci series");
            break;
            }
            else
        {c=a+b;
        b=a;
        a=c;}




    }
    if(n!=c)
        printf("NO !! Given number is NOT there in fibonacci series ");

    return 0;
}

