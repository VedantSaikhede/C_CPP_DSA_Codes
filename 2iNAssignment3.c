

//3. Write a program to swap values of two int variables

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two values a and b -");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("value of a is %d and b is %d",a,b);
    return 0;
}
