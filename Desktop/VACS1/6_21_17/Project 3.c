#include<stdio.h>
#include<math.h>
void main()
{
 int i,j,k,n,val;
 printf("Enter value for n: ");
 scanf("%d",&n);
 float m[n][n];
 float tans[n][n];

 for(i=0;i!=n;++i)
 {
    for(j=0;j!=n;++j)
    {
      printf("Enter value: ");
      scanf("%d",&val);
      m[i][j]=val;
    }
 }
 for(i=0;i!=n;++i)
 {
    for(j=0;j!=n;++j)
    {
      //tans[i][j]=m[j][i];
      printf("%lf ",m[i][j]);
    }
    printf("\n");
 }
 printf("\n");
 for(i=0;i!=n;++i)
 {
    for(j=0;j!=n;++j)
    {
      tans[i][j]=m[j][i];
      printf("%lf ",tans[i][j]);
    }
    printf("\n");
 }
 }
