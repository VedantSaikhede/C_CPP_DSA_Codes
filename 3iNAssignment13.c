



//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

int main()
{
    int n;
    printf("Enter a number_");
    scanf("%d",&n);
    if(n%3==0 | n&2==0)
        printf("%d is divisible by 3 and 2 ",n);
    else
        printf("Not divisible");
    return 0;
}
