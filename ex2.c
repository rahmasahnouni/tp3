#include<stdio.h>
#include<stdlib.h>
void main ()
{
char x;
for (x='A';x<='Z';x++)
{
    if (!(    (x=='A') || (x=='E') || (x=='I') || (x=='O') || (x=='U') || (x=='Y')   ) )
    {
        printf(" %c",x);
    };
}
printf("\n");
for (x='Z';x>='A';x--)
{
    if (!(    (x=='A') || (x=='E') || (x=='I') || (x=='O') || (x=='U') || (x=='Y')   ) )
    {
        printf(" %c",x);
    };
}

}
