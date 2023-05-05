


//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.


int main()
{
   char n;
   printf("Enter a alphabet_");
   scanf("%c",&n);

    if(64<n && n<96)
        printf("%c is uppercase",n);
        else
        if(96<n && n<123)
            printf("%c is lowercase",n);
                else
                if(47<n && n<58)
                printf("%c is digit",n);
                else
                    printf("%c is special character",n);

    return 0;
}

/* ALT

#include<stdio.h>
int main()
{
    char a;
    printf("Enter a key");
    scanf("%c",&a);
    if(47<a && a<58)
    {
       printf("The entered key is digit");
    }
    else
    if(a>='a'&&a<='z')
   {
       printf("The alphabate is in lowercase");
   }
   else
   if(a>='A'&& a<='Z')
    {
    printf("The alphabate is in Uppercase");
    }
    else
         printf("The alphabate is a special charecter");

  return 0;
}
*/
