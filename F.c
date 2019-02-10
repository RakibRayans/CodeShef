#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    if(islower(s[0]))
    {
        s[0]=s[0]-32;
        printf("%s\n",s);
    }
    else
        printf("%s\n",s);
        return 0;
}
