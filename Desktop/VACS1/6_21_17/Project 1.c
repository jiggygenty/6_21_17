#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
float m[3][3];
//
m[0][0]=1;
m[0][1]=2;
m[1][0]=3;
m[1][1]=4;
//
for (i=0;i!=3;++i)
{
    for (j=0;j!=3;++j)
    {
    scanf("%f ",&m[i][j]);
    }
}

for (i=0;i!=3;++i)
{
    for (j=0;j!=3;++j)
    {
    printf("%lf ",m[i][j]);
    }
printf("\n");
}
return 0;
}
