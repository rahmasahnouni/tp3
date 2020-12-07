#include <stdio.h>
void main ()
{
    int n,m,i,j,sn,sm;
    do
    { printf("donner un entier n= ");
    scanf("%d",&n);
    } while (!(n>0));
   do
   {
     printf("donner un entier m= ");
    scanf("%d",&m);
   } while (!(m>0));

    sn=0;
    for(i=1;i<=(n/2);i++)
    {
        if (n%i==0)
        {
            sn=sn+i;
        }
    }
    sm=0;
   for(j=1;j<=m/2;j++)
    {
        if (m%j==0)
        {
            sm=sm+j;
             }
    }
    if ((sm==n)&&(sn==m))
    {
        printf("%d et %d sont deux nombres amis",n,m);
    }
    else
    {
printf("%d et %d ne sont pas deux nombres amis",n,m);
    }
}
