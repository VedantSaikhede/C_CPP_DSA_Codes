
//1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float AOC(float );
int main()
{
    float r,z;
    printf("Enter the value of Redius-");
    scanf("%f",&r);
    z=AOC(r);
    printf("\nArea of circle is %f",z);
    return 0;
}
float AOC(float r)
{
    return (3.14)*r*r;
}

