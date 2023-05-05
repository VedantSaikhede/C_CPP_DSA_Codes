


//8. Write a program to check whether a given year is a leap year or not.



#include<stdio.h>
int main()
{
    int n;
    printf("Enetr the Year");
    scanf("%d",&n);
    if(n%100)
    {
        if(n%4)
            printf("NLY");
        else
            printf("LY");

    }
    else
    {
        if(n%400)
            printf("NLY");
        else
            printf("LY");
    }
    return 0;
}
