#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,n,a,z,s;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\n\n");
    s=n;
    for(x=0; x<=n; x++)
    {
        a=1;
        for(z=s; z>=0; z--)
            printf(" ");

        for(y=0; y<=x; y++)
        {
            printf("%d ",a);
            a=(a*(x-y)/(y+1));
        }
        printf("\n");
    }

}
