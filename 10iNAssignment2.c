
//2. Write a function to calculate simple interest. (TSRS)


#include<stdio.h>
float SI(float,float,float);
int main()
{
    float b,i,t,z;
    printf("Enter balance,rate and time respect");
    scanf("%f%f%f",&b,&i,&t);
    z=SI(b,i,t);
    printf("\nSimple Intrest=%f",z);
    return 0;
}
float SI(float b,float i,float t)
{
    return (b*i*t)/100;
}

