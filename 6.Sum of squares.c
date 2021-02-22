#include<stdio.h>
#include<conio.h>

int sum(int);

void main ()
{
    int a, s;
    printf ("\n Enter the ending number:");
    scanf ("%d", &a);
    s=sum(a);
    printf ("\n Sum of squares of odd numbers upto %d is: %d",a,s);
    getch();
}

int sum(int n)
   {
    int i,b=0;
        for(i=1; i<=n; i++)
        {
            if(i%2!=0)
            b=b+(i*i);
        }
    return b;
   }
