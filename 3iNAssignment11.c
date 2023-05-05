



/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

int main()
{
    int a,b,c,d,e;
    printf("Enter a marks of MATHS_");
    scanf("%d",&a);
    printf("Enter a marks of BIO_");
    scanf("%d",&b);
    printf("Enter a marks of PHY_");
    scanf("%d",&c);
    printf("Enter a marks of CHEM_");
    scanf("%d",&d);
    printf("Enter a marks of ENG_");
    scanf("%d",&e);
    if(a>=33)
    { if(b>=33)



{
            if(c>=33)
            {
                if(d>=33)

                {
                    if(e>=33)
                   printf("PASS");


                }
                else
    printf("FAIL");

            }
            else
    printf("FAIL");

        }
        else
    printf("FAIL");

    }

    else
    printf("FAIL");
return 0;


}

