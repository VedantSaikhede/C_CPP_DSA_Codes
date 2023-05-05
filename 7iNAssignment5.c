

//5. Write a program to check whether two given numbers are co-prime numbers or not.

#include<stdio.h>
#include<conio.h>

int main()
{
	 int n1,n2,h,i;
	 printf("Enter two numbers:\n");
	 scanf("%d%d",&n1,&n2);
	 for(i=1;i<=n1;i++)
	  if(n1%i==0 && n2%i==0)
	       h=i;
	 if(h==1)
	  printf("%d and %d are CO-PRIME NUMBERS.",n1,n2);
	 else
	  printf("%d and %d are NOT CO-PRIME NUMBERS.",n1,n2);

	 return(0);
}
