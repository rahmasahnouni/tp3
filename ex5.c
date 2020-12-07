#include<stdio.h>
void main()
{
    int n,d;
    do{
    printf("taper entier=");
    scanf("%d",&n);
    }while(n<=0);
    do
    {
        d=n %10;
        printf("%d",d);
        n=n/10;
    }while (n!=0);



}
