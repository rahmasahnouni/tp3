#include<stdio.h>
#include<stdlib.h>
void main ()
{
int x,i;
long int f;
do
{
    printf("taper un entier =   ");
    scanf("%d",&x);
}while (!(x>0));
f=1;
for (i=1;i<=x;i++)
{
f=f*i;
}
printf("le factorielle de %d=%d",x,f);
}

