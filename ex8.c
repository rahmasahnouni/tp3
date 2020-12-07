#include<stdio.h>
void main ()
{
    int n,s,i;
    printf("taper un nombre= ");
    scanf("%d",&n);
    s=0;
    for (i=1;i<=n-1;i++)
    {
        if (n % i ==0)
        {
            s=s+i;
        }
    }
    if (s==n)
    {
        printf("%d est un nombre parfait",n);
    }
    else
    {
         printf("%d n'est un nombre parfait",n);
    }
    }
