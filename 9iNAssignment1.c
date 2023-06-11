
/*1. Write a program which takes the month number as an input and display
number of days in that month.*/


#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Month Number- ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Numbers of Days in 1st month is 31");
        break;
    case 2:
        printf("Numbers of Days in 2nd month is 28");
        break;
    case 3:
        printf("Numbers of Days in 3rd month is 31");
        break;
    case 4:
        printf("Numbers of Days in 4th month is 30");
        break;
    case 5:
        printf("Numbers of Days in 5th month is 31");
        break;
    case 6:
        printf("Numbers of Days in 6th month is 30");
        break;
    case 7:
        printf("Numbers of Days in 7th month is 31");
        break;
    case 8:
        printf("Numbers of Days in 8th month is 31");
        break;
    case 9:
        printf("Numbers of Days in 9th month is 30");
        break;
    case 10:
        printf("Numbers of Days in 10th month is 31");
        break;
    case 11:
        printf("Numbers of Days in 11th month is 30");
        break;
    case 12:
        printf("Numbers of Days in 12th month is 31");
        break;
    default :
        printf("Invalid Monh Number ");

    }
    return 0;
}




