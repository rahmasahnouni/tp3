#include<stdio.h>
void main ()
{
     int n,i;
    do
    {
        printf("taper entier= \n");
        scanf("%d",&n);
    }while(!(n>0));
float s;
    s=1;
    i=1;
    do
    {
     i=i+2;
     s=s+(float) (i*i)/(i*i*i);
    }while (!(i>=n));
printf("somme sn=  %2.2f",s);
}
