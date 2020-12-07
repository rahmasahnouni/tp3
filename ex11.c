#include <stdio.h>
void main()
{
    int n,nb;
    do
    {
        printf("donner n= ");
        scanf("%d",&n);
    }while (!(n>0));
    nb=0;
    do
    {
        if (n%2==0)
        {
            n=n/2;
            }
       else
       {
           n=(3*n)+1;
       }
       nb=nb+1;
       printf("%d \t",n);
    }while (!(n==1));
    printf("\n");
    printf("on doit appliquer %d fois la transformation avant d'arriver à 1",nb);
}
