/* 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/


#include<stdio.h>
int main()
{
    int a,b,n=0;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    for(;n!=5;)
    {

    printf("1. Addition \n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("SELECT THE OPERTAOR -");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
        printf("Addition of %d and %d is %d \n",a,b,a+b);
        break;
    case 2:
        printf("Subtraction of %d and %d is %d \n",a,b,a-b);
        break;
    case 3:
        printf("multiplication of %d and %d is %d \n",a,b,a*b);
        break;
    case 4:
        printf("Division of %d and %d is %d \n",a,b,a/b);
        break;
    case 5:
        printf("EXITED SUCESSESFULLY !!!");
        break;


    }
    }
    return 0;
}

