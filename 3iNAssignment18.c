

//18. Write a program which takes the month number as an input and display number of days in that month
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    printf("Enter a Month Number");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("JAN 31");
        break;
    case 2:
        printf("FEB 28/29");
        break;
    case 3:
        printf("MARCH 31");
        break;
    case 4:
        printf("APRIL 30");
        break;
    case 5:
        printf("MAY 31");
        break;
    case 6:
        printf("JUN 30");
        break;
    case 7:
        printf("JULY 31");
        break;
    case 8:
        printf("AUG 31");
        break;
    case 9:
        printf("SEPT 30");
        break;
    case 10:
        printf("OCT 31");
        break;
    case 11:
        printf("NOV 30");
        break;
    case 12:
        printf("DEC 31");
        break;
    default:
        printf("%d IS INVALID MONTH NUMBER",a);

    }
    return 0;
}

