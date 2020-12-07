#include<stdio.h>
void main ()
{
    int x,i,j;
     char  c;
  printf("taper nombre de ligne");
  scanf("%d",&x);
for (i=1;i<=x;i++)
{
    for (j=1;j<=i;j++)
{
    printf("*");
}
    printf("\n");
}



}
