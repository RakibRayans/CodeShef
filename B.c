#include<stdio.h>
int main()
{
    int n,x,y,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum =0;
        scanf("%d %d",&x,&y);
                for(j=x;j<=y;j++)
                   if(j%2!=0)
                   sum=sum+j;

        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
