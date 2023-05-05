


//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
/*
#include<stdio.h>

int main()
{
    float cp,sp,profit,loss;
    printf("Enter cost price and selling price_");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
        printf("Profit is %f%% ",(sp-cp)/100);
    if(sp<cp)
        printf("Loss is %f%% ",(cp-sp)/100);
    if(cp==sp)
        printf("No profit OR loss !!! ");
    return 0;
}
*/#include<stdio.h>
int main()
{

    float cp,sp,a=0,b=0,pp=0,lp=0;
    printf("Enter a cp");
    scanf("%f",&cp);
    printf("Enter a sp");
    scanf("%f",&sp); 
    if(cp<sp)
    {
        printf("Great You are in profit\n");
        a=sp-cp;
        pp=a/100;
        printf("%f percent profit you got\n",pp);
    }
    else{
            printf("OOps you are in loss\n");
            b=cp-sp;
            lp=b/100;
            printf("%f percent loss you are in\n",lp);
}}
