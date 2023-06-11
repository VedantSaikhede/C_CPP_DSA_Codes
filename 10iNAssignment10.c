

/*10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

# include <stdio.h>
# include <math.h>
void primeFac(int);
int main()
{
    int n;
    printf("Enter the number-");
    scanf("%d",&n);
    primeFac(n);
    return 0;
}

void primeFac(int n)
{
    while(n%2==0)
    {
        printf("%d ",2);
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
    if(n>2)
        printf("%d ",n);
}



