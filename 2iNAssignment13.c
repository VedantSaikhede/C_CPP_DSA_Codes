

//13. Write a program to take a three-digit number from the user and rotate its digits by
//   one position towards the right

#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enetr three digit number");
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    //printf("n=%d a=%d",n,a);
    printf("Result is %d",n*10+a);
    return 0;

}
