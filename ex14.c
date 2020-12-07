
#include<stdio.h>
void main ()
{ int u,u0,u1,i;
    printf("1 terme= 2\n ");
    printf("2 terme= 1\n ");
    u0=2;
    u1=1;
for (i=0;i<=18;i++)
    {
        u=u1+u0;
        printf("%d terme= %d \n  ",i+2,u);
        u0=u1;
        u1=u;
    }

}
