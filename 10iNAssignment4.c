

//4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>
N_Natural_no(int);
int main()
{
    int n;
    printf("Enter the value of N");
    scanf("%d",&n);
    N_Natural_no(n);
    return 0;

}
N_Natural_no(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d   ",i);
}

