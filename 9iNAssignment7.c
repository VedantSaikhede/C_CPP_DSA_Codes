
/*7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
/*
#include<stdio.h>
int main()
{
    int s=0,u,n,t,x;
    printf("Enter the Units -");
    scanf("%d",&u);
    x=u;
    if(u<=250)
        n=1;
    else
        n=4;
    switch(n)
    {
    case 1:
        s=u*0.50+s;
        u=u-50;
        if(u<=0)
        {
            t=s+s*0.2;
        printf("Total electricity Bill is %d",t);
        break;
        }

    case 2:
        s=s+u*0.25;
        u=u-100;
        if(u<=0)
        {
            t=s+s*0.2;
        printf("Total electricity Bill is %d",t);
        break;
        }

    case 3:
        s=s+u*0.45;
        t=s+s*0.2;
        printf("Total electricity Bill is %d",t);
        break;
    case 4:
        t=(u*1.50)+(u*1.50)*0.2;
        printf("Total Electricity  bill is  %d",t);

    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    float u;
    int n;
    printf("Enter a Number");
    scanf("%d",&n);

    switch(n)
    {
         case 1:
             {
                 if(u<=50)
                 {
                    printf("Enter units");
                    scanf("%f",&u);
                    u=u*0.50;
                    printf("your electricity bill %f",u);
                 }
                 else
                 if(u>50&&u<=100)
                 {
                    printf("Enter units");
                    scanf("%f",&u);
                    u=u*0.75;
                    printf("your electricity bill %f",u);
                 }
                 else
                 if(u>100&&u<=200)
                 {
                    printf("Enter units");
                    scanf("%f",&u);
                    u=u*1.20;
                    printf("your electricity bill %f",u);
                 }
                 else
                    if(u<=250)
                 {
                    printf("Enter units");
                    scanf("%f",&u);
                    u=u*1.50;
                    printf("your electricity bill %f",u);
                 }
              }
    }
  return 0;
}

