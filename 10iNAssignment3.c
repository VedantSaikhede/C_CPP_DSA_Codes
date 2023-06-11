

/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/


#include<stdio.h>
int even_odd(int);
int main()
{
    int n,z;
    printf("Enter a number-");
    scanf("%d",&n);
    z=even_odd(n);
    if(z==0)
        printf("\nEVEN ");
    else
        printf("\nODD");
    return 0;

}
int even_odd(int n)
{
    if(n%2)
        return 1;
    else
        return 0;

}
