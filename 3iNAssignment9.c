


//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
        if(a>c)
        printf("%d is Greater than %d and %d",a,b,c);
        else
        printf("%d is Greater then %d and %d",c,a,b);
    else
        if(b>c)
        printf("%d is Greater than %d and %d",b,a,c);
        else
        printf("%d is Greater than %d and %d",c,a,b);
    return 0;
}
