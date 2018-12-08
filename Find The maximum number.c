#include<stdio.h>
int main()
{
    int i,n,a[100],max;
    printf("How many number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("The maximum number is : %d",max);
}
