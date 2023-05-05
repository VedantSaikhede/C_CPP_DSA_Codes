



//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.



int main()
{
    int n;
    printf("Enter a number_");
    scanf("%d",&n);
    if(n%7==0 | n&3==0)
        printf("%d is divisible by 7 and 3 ",n);
    else
        printf("Not divisible");
    return 0;
}
