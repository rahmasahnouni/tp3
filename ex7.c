#include<stdio.h>
void main()
{int n,i;
printf("donner un entier");
scanf("%d",&n);
i=2;
while ((n%i!=0)&&(i<=n/2))
{
    i++;
}
    if (i>n/2)
       {
        printf("%d est premier",n);
       }
else
{
    printf("%d n'est pas premier",n);
}

}
