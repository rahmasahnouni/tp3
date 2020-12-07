#include<stdio.h>
void main ()
{
    int n,i,x ;
    do
    {
    printf("taper un entier= \n");
    scanf("%d",&n);
    }while (!(n>0) );
    x=0;
    for (i=n-1;i>0;i--)
    {
        if (i %3==0)
        {
            x=x+1;
            printf("%d\n",i);
        }
    }
    if (x==0)
    {
        printf("il n'ya aucun nombre divisible par 3 inférieur à %d",n);
    }
    else
    {
        printf("leur nombre egale %d",x);
    };
}
