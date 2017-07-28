#include<stdio.h>
#include<math.h>
void main()
{
char x='A';
int y;
int i,j;
for(y=1;y!=6;++y)
{

    for(i=0;i!=(y);++i)
    {
    printf("%c",x);
    x--;
    }
x+=(y+1);
printf("\n");
}
}
