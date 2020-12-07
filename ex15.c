#include<stdio.h>
void main ()
{
        int i,j,n,f;

    printf("donner l'ordre n=");
    scanf("%d",&n);
    float s    ;
//methode 1=:
    s=0;
    for (i=0;i<=n;i++)
    {

        f=1;
        for (j=1;j<=i;j++)
        {
            f=f*j;
        }
        s=s+(1.0/f);
    }
    printf("exponentiel 1 e= %2.2f",s);


//methode 2:

    s=1;
    f=1;
    i=0;
    while (i!=n)
    {
        i=i+1;
        f=f*i;
        s=s+(1.0/f);
    }

printf("\n exponentiel 2 e= %2.2f",s);




}
