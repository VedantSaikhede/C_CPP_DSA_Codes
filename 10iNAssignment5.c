

//5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
N_Natural_No(int);
int  main()
{
    int n;
    printf("Enter the value of N-");
    scanf("%d",&n);
    N_Natural_No(n);
    return 0;
}
N_Natural_No(int n)
{
    for(int i=1;i<=(2*n);i+=2)
        printf("%d   ",i);

}

