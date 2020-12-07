#include<stdio.h>
void main ()
{
    int x1,y1,x,y,r;
    printf("donner dex entiers x et y \n");
    scanf("%d%d",&x,&y);
    x1=x;
    y1=y;
    r=x%y;
    while (r!=0)
    {
        x=y;
        y=r;
        r=x%y;
    }
    printf("le PGCD de %d et %d est %d",x1,y1,y);
}
