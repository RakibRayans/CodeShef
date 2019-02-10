#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    while((scanf("%d %d",&x,&y))==2)
    {
      printf("%d\n",abs(x-y));

    }
    return 0;
}
