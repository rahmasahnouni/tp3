#include<stdio.h>
void main ()
{
    //boucle for:
    int i,s;
    s=0;
    for (i=1;i<=20;i++)
    {
        s=s+i;
    }
    printf("somme version for    %d \n",s);
//boucle while:
i=1;
s=0;
while (i<=20)
{
    s=s+i;
    i=i+1;
}
printf("somme version while =  %d \n",s);
//boucle do :
i=1;
s=0;
do
{
    s=s+i;
    i=i+1;
}while ((i<=20)   );
printf("somme version do =  %d \n",s);
}
