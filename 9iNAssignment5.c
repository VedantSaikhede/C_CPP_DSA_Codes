

/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of var variable ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default :
        printf("Invalid");
    }
    return 0;
}

