#include <stdio.h>
void main ()
{int n;
float s1,s2,s3,i;
do
{ printf("donner n= ");
scanf("%d",&n);

}while (!(n>0));

    s2=-0.5;
    for (i=2;i<=(n-1);i+=2);
    {
        s2=s2-(1/i);
    }
     s1=1;
     for (i=1;i<=n;i+=2);
     {
         s1=s1+(1/i);
      }

printf(" la somme s1 est égale %f \n",s1);
printf("la somme s2 est égale %f \n",s2);
printf("la somme s3 est la soustraction de %f-%f=%f \n",s1,s2,s3);


}
