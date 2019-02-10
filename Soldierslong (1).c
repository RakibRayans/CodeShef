#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,t,n,a,b;
    int counter=0,divisor=3;
    scanf("%I64d",&t);
    int counterarr[t];

    for(i=0;i<t;i++)
    {
        a=0;
        b=0;
        counter=0;
        divisor=3;
        scanf("%I64d %I64d",&a,&b);
        n=fact(a)/fact(b);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            counter++;
        }
        else
        {
            if(n%divisor==0)
            {
                n=n/divisor;
                counter++;
            }
            else
            {
                divisor+=2;
            }
        }
    }
counterarr[i]=counter;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",counterarr[i]);
    }

}
int fact(int x)
{
    int i,y=1;
    for(i=1;i<=x;i++)
    {
        y*=i;
    }
    return y;
}
