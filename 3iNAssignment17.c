


//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

int main()
{
    int a,b,c;
    printf("Enter the values of sides-");
    scanf("%d%d%d",&a,&b,&c);
    if (a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid Triangle ");
    else
        printf("Valid Triangle");
    return 0;
}
