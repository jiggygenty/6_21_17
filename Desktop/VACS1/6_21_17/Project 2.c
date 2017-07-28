#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,k;

 float m[3][3];
 float tans[3][3];
 m[0][0]=1;
 m[0][1]=2;
 m[0][2]=3;
 m[1][0]=4;
 m[1][1]=5;
 m[1][2]=6;
 m[2][0]=7;
 m[2][1]=8;
 m[2][2]=9;

 for(i=0;i!=3;++i)
 {
    for(j=0;j!=3;++j)
    {
      tans[i][j]=m[j][i];
      printf("%lf ",tans[i][j]);
    }
    printf("\n");
 }
return 0;
 }
