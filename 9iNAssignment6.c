

//6. Program to check whether a year is a leap year or not. Using switch statement.


#include<stdio.h>
int  main()
{
   int yr,y;

   printf("Enter the Year :\n");
   scanf("%d",&yr);

 y=yr%400==0||yr%100==0||yr%4==0;
 switch(y)
 {
        case 1:
            printf("\n%d is the leap year.\n",yr);
            break;

        case 0:
            printf("\n%d is not the leap year.\n",yr);
            break;

        default:
            printf("\n%d is not the leap year.\n",yr);
    }
    return 0;

}
