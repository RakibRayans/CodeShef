#include<stdio.h>
int main()
{
    int n,i;
    long long int a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d  %d",&a,&b);
        if(a>b) printf(">\n");
        else if(a<b) printf("<\n");
        else printf("=\n");
    }
return 0;
}
